cmake_minimum_required(VERSION 3.19.0)
set(This aerospike_test)
project(${This} VERSION 0.1.0)

set (CMAKE_C_STANDARD 99)
set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_POSITION_INDEPENDENT_CODE ON)
set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_FLAGS -pthread)

set(Headers
  threadpool/threadpool.h
)

set(Sources
  threadpool/threadpool.cpp
  main.cpp
)

add_executable(${This} ${Sources} ${Headers})

