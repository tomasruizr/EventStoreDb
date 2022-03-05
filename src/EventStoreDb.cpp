#include <iostream>
#include <string>
#include <grpcpp/grpcpp.h>
#include "../Grpc/streams.grpc.pb.h"
#include "../Grpc/streams.pb.h"
#include "../include/EventStoreDb.h"
#include "../include/uuid.h"

using namespace std;

void EventStoreDb::connect(string address){
	channel = grpc::CreateChannel(address, grpc::InsecureChannelCredentials());
	if (!channel->WaitForConnected(gpr_time_add(
			gpr_now(GPR_CLOCK_REALTIME),
			gpr_time_from_seconds(600, GPR_TIMESPAN)))) {
			cout << "EventStoreDb Connection Failed.\n";
			exit(1);
	}
	grpc_connectivity_state state = channel->GetState(true);
	cout << "EventStoreDb gRPC Connected.\n";
};

void EventStoreDb::append_to_stream(string stream, vector<Event> events){
	auto stub = event_store::client::streams::Streams::NewStub(channel);
	event_store::client::streams::AppendReq reqHeaders;
	reqHeaders.mutable_options()->mutable_stream_identifier()->set_stream_name(stream);
	reqHeaders.mutable_options()->mutable_any();
	auto request = stub->Append(new grpc::ClientContext(), new event_store::client::streams::AppendResp());
	request->Write(reqHeaders);

	for (auto m : events){
		std::string id = uuid();
		// cout << "the ID: " << id << "\n";
		event_store::client::streams::AppendReq req;
		auto message1 = req.mutable_proposed_message();
		message1->set_data(m.data);
		auto& map = *message1->mutable_metadata();
		map["type"] = m.name;
		map["content-type"] = "application/json";
		map["$correlationId"] = id;
		message1->mutable_id()->set_string(id);
		request->Write(req);
		// cout << "Event created with id: " << id << "\n";
	}
	request->WritesDone();
	auto status = request->Finish();
	if (!status.ok()){
			cout << "Error code: " << status.error_code() << "\n";
			cout << "Error message: " << status.error_message() << "\n";
			cout << "Error details: " << status.error_details() << "\n";
	}
	else {
			// cout << "Events created successfuly\n";
	}
}

// template<class UnaryFunction>
void EventStoreDb::read_stream(string stream, function<void (Event)> onEvent){
	auto stub = event_store::client::streams::Streams::NewStub(channel);
	event_store::client::streams::ReadReq read;
	read.mutable_options()->mutable_stream()->mutable_stream_identifier()->set_stream_name(stream);
	read.mutable_options()->mutable_stream()->mutable_start();
	read.mutable_options()->mutable_stream()->set_revision(0);
	read.mutable_options()->set_read_direction((event_store::client::streams::ReadReq_Options_ReadDirection)0);
	read.mutable_options()->mutable_uuid_option()->mutable_string();
	read.mutable_options()->set_resolve_links(false);
	read.mutable_options()->mutable_no_filter();
	read.mutable_options()->set_count(9007199254740991);
	
	auto context = new grpc::ClientContext();
	auto req_tal = stub->Read(context, read);
	event_store::client::streams::ReadResp msg;
	
	while (req_tal->Read(&msg)){
			auto data = msg.event().event().data();
			auto metadata = msg.event().event().metadata();
			onEvent(Event(metadata.at("type"), data, msg.event().event().stream_revision()));
	}
	req_tal->Finish();
}