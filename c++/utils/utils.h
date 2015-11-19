//
// Created by Develop on 11/9/15.
//

#ifndef LEETCODE_UTILS_H
#define LEETCODE_UTILS_H

#include <vector>
#include <iostream>
#include "../types/list_node.h"

class Utils {
public:
  Utils(){};
  void print_vector(std::vector<int> v);
  ListNode *init_linked_list(int a[],int size);
};


#endif //LEETCODE_UTILS_H
