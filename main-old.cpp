#include <iostream>
#include <string>
#include <grpcpp/grpcpp.h>
#include "Grpc/streams.grpc.pb.h"
#include "Grpc/streams.pb.h"
#include "uuid.h"
#include "threadpool/threadpool.h"

using namespace std;
// auto append_to_stream(event_store::client::streams::Streams::Stub* stub){
auto append_to_stream(std::shared_ptr<grpc_impl::Channel> channel){
    return [channel] (string streamName, vector<string> data, string metadata){
        cout << "Entre aqui1\n";
        auto stub = event_store::client::streams::Streams::NewStub(channel);
        cout << "Entre aqui2\n";
        std::random_device rd;
        auto seed_data = std::array<int, 512> {};
        std::generate(std::begin(seed_data), std::end(seed_data), std::ref(rd));
        std::seed_seq seq(std::begin(seed_data), std::end(seed_data));
        std::ranlux48_base generator(seq);
        uuids::basic_uuid_random_generator<std::ranlux48_base> gen(&generator);
        event_store::client::streams::AppendReq reqHeaders;
        reqHeaders.mutable_options()->mutable_stream_identifier()->set_stream_name(streamName);
        reqHeaders.mutable_options()->mutable_any();

        cout << "Entre aqui3\n";
        auto req_tal = stub->Append(new grpc::ClientContext(), new event_store::client::streams::AppendResp());
        cout << "Entre aqui4\n";
        req_tal->Write(reqHeaders);
        cout << "Entre aqui4b\n";
        cout << streamName << "\n";
        cout << data.size() << "\n";
        cout << data.at(1) << "\n";
        for (auto m : data){
            cout << "Entre aqui4c\n";
            cout << m << "\n";
            event_store::client::streams::AppendReq req;
            auto message1 = req.mutable_proposed_message();
            message1->set_data(m);
            auto& map = *message1->mutable_metadata();
            map["type"] = "SomeEvent";
            map["content-type"] = "application/json";
            auto id = uuids::to_string(gen());
            cout << "Entre aqui4d\n";
            message1->mutable_id()->set_string(id);
            cout << "Entre aqui4e\n";
            req_tal->Write(req);
            cout << "Event created with id: " << id << "\n";
        }
        // req_tal->WriteLast(req, grpc::WriteOptions());
        cout << "Entre aqui5\n";
        req_tal->WritesDone();
        cout << "Entre aqui6\n";
        auto status = req_tal->Finish();
        if (!status.ok()){
            cout << "Error code: " << status.error_code() << "\n";
            cout << "Error message: " << status.error_message() << "\n";
            cout << "Error details: " << status.error_details() << "\n";
        }
        else {
            cout << "Events created successfuly\n";
        }
    };
}

auto read_stream(event_store::client::streams::Streams::Stub* stub){
    return [stub] (string streamName){
        event_store::client::streams::ReadReq read;
        read.mutable_options()->mutable_stream()->mutable_stream_identifier()->set_stream_name(streamName);
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
            cout << "LA DATA: " << data << "\n"; 
            cout << "Event Name: " << metadata.at("type") << "\n"; 
            cout << "Revision: " << msg.event().event().stream_revision() << "\n"; 
        }
        req_tal->Finish();
    };
}

int main() {
    std::string target_address("docker.for.mac.localhost:2113");
    auto channel = grpc::CreateChannel(target_address, grpc::InsecureChannelCredentials());
    if (!channel->WaitForConnected(gpr_time_add(
        gpr_now(GPR_CLOCK_REALTIME),
        gpr_time_from_seconds(600, GPR_TIMESPAN)))) {
        cout << "NO NOS CONECTAMOS\n";
        return 1;
    }
    
    grpc_connectivity_state state = channel->GetState(true);
    
    auto tp = thread_pool();
    for (size_t i = 0; i < 1; i++)
    {
        append_to_stream(channel)("algun-tal5", vector<string>{"{\"name\": \"tomas1\"}", "{\"name\": \"tomas2\"}"}, "");
    }
    // read_stream(stub.get())("testStream-1");
    return 0;
}