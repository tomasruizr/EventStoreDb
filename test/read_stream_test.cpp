#include <gtest/gtest.h>
#include <string>
#include <memory>
#include "../include/EventSourcing.h"
#include "../include/EventStoreDb.h"

using namespace std;

TEST(ReadStreamTest, Works) {
  unique_ptr<EventStoreDb> event_store = make_unique<EventStoreDb>();
  event_store->connect("docker.for.mac.localhost:2113");
  event_store->read_stream("some-stream-from-test", [](Event e){
    cout << "Name: " << e.name;
    cout << "\n";
    cout << "Data: " << e.data;
    cout << "\n";
    cout << "Revision: " << e.revision;
    cout << "\n";
    cout << "----------------------------------------\n";
  });
  EXPECT_TRUE(true);
} 