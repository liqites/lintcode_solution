//
// Created by Develop on 11/4/15.
//



#ifndef LEETCODE_LIST_NODE_H
#define LEETCODE_LIST_NODE_H
#include <stddef.h>
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x),next(NULL) {}
};

#endif //LEETCODE_LIST_NODE_H
