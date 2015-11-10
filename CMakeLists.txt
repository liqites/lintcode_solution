cmake_minimum_required(VERSION 3.3)
project(leetcode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        c++/types/linked_list.cpp c++/types/linked_list.h c++/types/list_node.h c++/types/tree_node.h c++/types/tree.h c++/types/tree.cpp c++/utils/utils.cpp c++/utils/utils.h c++/solutions/solution.h c++/solutions/fibonacci.cpp c++/solutions/remove_elements.cpp c++/solutions/add_binary.cpp c++/solutions/add_two_numbers.cpp c++/solutions/first_position_of_target.cpp c++/solutions/btree_inorder_traversal.cpp c++/entry.cpp)

add_executable(leetcode ${SOURCE_FILES})