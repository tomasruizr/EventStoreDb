cmake_minimum_required(VERSION 3.19.0)
set(This EventStoreDb)
project(${This} VERSION 0.1.0)

set (CMAKE_C_STANDARD 99)
set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_POSITION_INDEPENDENT_CODE ON)
set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_FLAGS -pthread)

set(Headers
  include/EventStoreDb.h
  include/uuid.h
  Grpc/shared.pb.h
  Grpc/code.pb.h
  Grpc/cluster.pb.h  
  Grpc/gossip.pb.h
  Grpc/operations.pb.h
  Grpc/projections.pb.h
  Grpc/streams.pb.h
  Grpc/monitoring.pb.h
  # Grpc/persistent.pb.h
  Grpc/serverfeatures.pb.h
  Grpc/status.pb.h
  # Grpc/users.pb.h
  Grpc/shared.grpc.pb.h
  Grpc/code.grpc.pb.h
  Grpc/cluster.grpc.pb.h  
  Grpc/gossip.grpc.pb.h
  Grpc/operations.grpc.pb.h
  Grpc/projections.grpc.pb.h
  Grpc/streams.grpc.pb.h
  Grpc/monitoring.grpc.pb.h
  # Grpc/persistent.grpc.pb.h
  Grpc/serverfeatures.grpc.pb.h
  Grpc/status.grpc.pb.h
  # Grpc/users.grpc.pb.h
)

set(Sources
  src/EventStoreDb.cpp
  Grpc/shared.pb.cc
  Grpc/code.pb.cc
  Grpc/cluster.pb.cc 
  Grpc/gossip.pb.cc
  Grpc/operations.pb.cc
  Grpc/projections.pb.cc
  Grpc/streams.pb.cc
  Grpc/monitoring.pb.cc
  # Grpc/persistent.pb.cc
  Grpc/serverfeatures.pb.cc
  Grpc/status.pb.cc
  # Grpc/users.pb.cc
  Grpc/shared.grpc.pb.cc
  Grpc/code.grpc.pb.cc
  Grpc/cluster.grpc.pb.cc 
  Grpc/gossip.grpc.pb.cc
  Grpc/operations.grpc.pb.cc
  Grpc/projections.grpc.pb.cc
  Grpc/streams.grpc.pb.cc
  Grpc/monitoring.grpc.pb.cc
  # Grpc/persistent.grpc.pb.cc
  Grpc/serverfeatures.grpc.pb.cc
  Grpc/status.grpc.pb.cc
  # Grpc/users.grpc.pb.cc
)

# add_executable(${This} ${Sources} ${Headers})
add_library(${This} STATIC ${Sources} ${Headers})

# TESTS
enable_testing()
add_subdirectory(googletest)
add_subdirectory(test)

include(FindProtobuf)
find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIR})
message(STATUS "Using protobuf ${Protobuf_VERSION}")

set(_GRPC_GRPCPP grpc++)
set(_GRPC_GRPC grpc)

target_link_libraries(${This} PRIVATE -luuid)
target_link_libraries(${This} PRIVATE
  ${PROTOBUF_LIBRARY}
  ${_GRPC_GRPCPP}
  ${_GRPC_GRPC}
)

