cmake_minimum_required(VERSION 3.3)
project(leetcode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        c++/solution.cpp c++/linked_list.cpp c++/linked_list.h c++/list_node.h c++/tree_node.h c++/tree.h c++/tree.cpp c++/utils.cpp c++/utils.h)

add_executable(leetcode ${SOURCE_FILES})