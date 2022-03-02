#include <string>
#include <memory>
#include "./include/EventSourcing.h"
#include "./include/EventStoreDb.h"

using namespace std;

int main() {
  unique_ptr<EventStoreDb> event_store = make_unique<EventStoreDb>("docker.for.mac.localhost:2113");
  event_store->connect();
  event_store->append_to_stream("some-stream", vector<Event>{Event("AddLastName", "{\"lastName\":\"ruiz\"}")});
}