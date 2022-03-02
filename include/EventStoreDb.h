#ifndef EVENTSTOREDB
#define EVENTSTOREDB
#include <iostream>
#include <string>
#include <memory>
#include <grpcpp/grpcpp.h>
#include "./EventSourcing.h"
using namespace std;

struct EventStoreDb_config {
	string commandsTcpHost;
	int commandsTcpPort;
	map<string, tuple< string, int>> tcpSubscriptions;
};

class EventStoreDb 
{
private:
	std::shared_ptr<grpc_impl::Channel> channel;
public:
	EventStoreDb() = default;
	void connect(string _address);
	void append_to_stream(string stream, vector<Event> events);

	// template<class UnaryFunction>
	// void read_stream(string stream, UnaryFunction onEvent);
	void read_stream(string stream, function<void (Event)> onEvent);

};
#endif // EVENTSTOREDB