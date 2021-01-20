 #include <gtest/gtest.h>

TEST(ExampleTests, DemostrateMacrosForTrue) {
  EXPECT_TRUE(true);
} 

TEST(ExampleTests, DemostrateMacrosForEqual) {
  EXPECT_EQ(true, true);
} 