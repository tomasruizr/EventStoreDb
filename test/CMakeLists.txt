cmake_minimum_required(VERSION 3.22.0)
set(This EventStoreDbTest)

set(Sources
  append_to_stream_test.cpp
  read_stream_test.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
  gtest_main
  EventStoreDb
)

add_test(
  NAME ${This}
  COMMAND ${This}
)