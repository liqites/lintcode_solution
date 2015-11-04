cmake_minimum_required(VERSION 3.3)
project(leetcode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        c++/solution.cpp c++/LinkedList.cpp c++/LinkedList.h c++/list_node.h)

add_executable(leetcode ${SOURCE_FILES})