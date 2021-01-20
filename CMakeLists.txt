cmake_minimum_required(VERSION 3.19.0)
set(This Example)
project(${This} VERSION 0.1.0)

set (CMAKE_C_STANDARD 99)
set (CMAKE_CXX_STANDARD 20)
set (CMAKE_POSITION_INDEPENDENT_CODE ON)

# include(CTest)
enable_testing()

add_subdirectory(googletest)

set(Headers
  Example.hpp
)

set(Sources
  Example.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
