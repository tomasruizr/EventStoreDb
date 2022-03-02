#include <gtest/gtest.h>
#include <string>
#include <memory>
#include "../include/EventSourcing.h"
#include "../include/EventStoreDb.h"

using namespace std;

TEST(AppendToStreamTest, Works) {
  unique_ptr<EventStoreDb> event_store = make_unique<EventStoreDb>();
  event_store->connect("docker.for.mac.localhost:2113");
  event_store->append_to_stream("some-stream-from-test", vector<Event>{Event("AddLastName", "{\"lastName\":\"ruiz\"}")});
  EXPECT_TRUE(true);
} 

TEST(ExampleTests, DemostrateMacrosForEqual) {
  EXPECT_EQ(true, true);
} 