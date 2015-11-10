//
// Created by Develop on 11/10/15.
// Add Two Numbers
//

#include "solution.h"

int Solution::getLinkedListLength(ListNode *head) {
  int length = 0;
  ListNode *current = head;
  while(current != NULL){
    length ++;
    current = current->next;
  }
  return length;
}

ListNode *Solution::getEndNode(ListNode *head) {
  ListNode *current = head;
  while(current != NULL){
    if(current->next == NULL){
      break;
    } else{
      current = current->next;
    }
  }
  return current;
}

ListNode *Solution::addLists(ListNode *l1, ListNode *l2) {
  int len1 = getLinkedListLength(l1);
  int len2 = getLinkedListLength(l2);

  if(len1 == 0){
    return l2;
  }

  if(len2 == 0){
    return l1;
  }

  if(len1 > len2){
    ListNode *e2 = getEndNode(l2);
    for(int i = 0; i < len1 - len2 ;i++){
      ListNode *node = new ListNode(0);
      e2->next = node;
      e2 = node;
    }
  }

  if(len2 > len1){
    ListNode *e1 = getEndNode(l1);
    for(int i = 0; i < len2 - len1 ;i++){
      ListNode *node = new ListNode(0);
      e1->next = node;
      e1 = node;
    }
  }

  ListNode *newListHead = NULL;
  ListNode *newListCurrent = newListHead;
  // add two list
  int result = 0;
  int carry = 0;
  ListNode *current1 = l1;
  ListNode *current2 = l2;
  while(current1 != NULL){
    int val1 = current1->val;
    int val2 = current2->val;
    result = (val1 + val2 +carry) % 10;
    carry = (val1 + val2 +carry) / 10;
    if(newListHead == NULL){
      newListHead = new ListNode(result);
      newListCurrent = newListHead;
    }else{
      ListNode *node = new ListNode(result);
      newListCurrent->next = node;
      newListCurrent = node;
    }
    current1 = current1->next;
    current2 = current2->next;
  }
  if(carry){
    newListCurrent->next = new ListNode(carry);
  }
  return newListHead;
}