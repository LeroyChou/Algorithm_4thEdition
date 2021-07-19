cmake_minimum_required(VERSION 3.5)

project(Sorting)

add_library(libSorting Src/insertionSort.cpp Src/selectionSort.cpp Src/helper.cpp Src/shellSort.cpp)

include_directories(${CMAKE_SOURCE_DIR}/Inc/)

add_executable(binSorting Src/main.cpp)

target_link_libraries(binSorting
    PRIVATE
    libSorting)
