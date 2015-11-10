//
// Created by Develop on 11/10/15.
// Remove Linked List Elements
//

#include "solution.h"

ListNode *Solution::removeElements(ListNode *head, int val){
  ListNode *current = head;
  ListNode *beforeNode;
  int current_val = -1;
  while(current){
    current_val = current->val;
    if(current_val == val){
      if(current == head){
        head = head->next;
        current = head;
      }
      else{
        beforeNode->next = current->next;
        beforeNode = current;
        current = current->next;
      }
    }else{
      beforeNode = current;
      current = current->next;
    }
  }
  return head;
}