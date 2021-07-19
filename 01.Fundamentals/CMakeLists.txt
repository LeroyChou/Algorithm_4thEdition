cmake_minimum_required(VERSION 3.5)

project(fundamental)

SET(CMAKE_BUILD_TYPE "Debug") 
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

include_directories(${CMAKE_SOURCE_DIR}/Inc/)

add_executable(bin Src/main.cpp Src/binarySearch.cpp)
