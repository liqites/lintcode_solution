//
// Created by Develop on 11/4/15.
//

#include <stddef.h>

#ifndef LEETCODE_LIST_NODE_H
#define LEETCODE_LIST_NODE_H

#endif //LEETCODE_LIST_NODE_H
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x),next(NULL) {}
};