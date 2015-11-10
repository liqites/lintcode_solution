//
// Created by Develop on 11/9/15.
//

#include "utils.h"
void Utils::print_vector(std::vector<int> v){
  for(std::vector<int>::const_iterator i = v.begin();i != v.end();i++){
    std::cout << *i << " ";
  }
}

ListNode *Utils::init_linked_list(int *a, int size) {
  ListNode *head = NULL;
  ListNode *current;
  for(int i = 0;i<size;i++){
    if(head == NULL){
      head = new ListNode(a[i]);
      current = head;
    }else{
      current->next = new ListNode(a[i]);
      current = current->next;
    }
  }
  current->next = NULL;
  return head;
}