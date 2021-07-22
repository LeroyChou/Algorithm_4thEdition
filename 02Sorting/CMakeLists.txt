cmake_minimum_required(VERSION 3.5)

project(Sorting)
set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

include_directories(${CMAKE_SOURCE_DIR}/Inc /usr/include/python3.6m)
# include_directories(${CMAKE_SOURCE_DIR}/Inc)

# link_directories(/usr/lib/x86_64-linux-gnu/libpython3.6m.a)

add_executable(binSorting Src/main.cpp Src/insertionSort.cpp Src/selectionSort.cpp Src/helper.cpp Src/shellSort.cpp Src/mergeSort.cpp)

