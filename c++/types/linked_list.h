//
// Created by Develop on 11/4/15.
//

#ifndef LEETCODE_LINKEDLIST_H
#define LEETCODE_LINKEDLIST_H

#include "list_node.h"

class LinkedList {
public:
  ListNode *head;
  LinkedList(int number[],int size){

  };
  void print();
  ListNode *reverse();
  ListNode *getEndNode();
};


#endif //LEETCODE_LINKEDLIST_H
