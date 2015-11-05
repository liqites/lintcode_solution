#include <stddef.h>
#include <iostream>
#include <vector>
#include <stack>
#include "tree.h"
#include "list_node.h"

using namespace std;

class Solution {
public:
  /**
   * @param n: an integer
   * @return an integer f(n)
   */
  int fibonacci(int n) {
    return fib_iter(1, 0, n - 1);
  }

  int fib_iter(int a, int b, int count) {
    if (count == 0) {
      return b;
    } else {
      return fib_iter(a + b, a, count - 1);
    }
  }

  ListNode *initializeLinkedList(int a[],int size){
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
    iteratorLinkedList(head);
    return head;
  }

  /**
   * @param head a ListNode
   * @param val an integer
   * @return a ListNode
   */
  ListNode *removeElements(ListNode *head, int val) {
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

  void iteratorLinkedList(ListNode *head){
    ListNode *current = head;
    while(current){
      cout << (*current).val << "->";
      current = current->next;
    }
    cout << "NULL\n";
  }

  ListNode *getEndNode(ListNode *head){
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

  ListNode *reverseLinkedList(ListNode *head){
    ListNode *current = head;
    ListNode *new_head = NULL;
    while(current != NULL){
      if(new_head==NULL){
        new_head = new ListNode(current->val);
      }else{
        ListNode *node = new ListNode(current->val);
        node->next = new_head;
        new_head = node;
      }
      current = current->next;
    }
    return new_head;
  }

  /*
     * @param a a number
     * @param b a number
     * @return the result
  */
  string addBinary(string& a, string& b) {
    // make string equal
    int len_a = a.size();
    int len_b = b.size();
    int i = 0;
    int length = 0;
    if(len_a > len_b) {
      while(i < len_a - len_b){
        b = '0' + b;
        i++;
      }
      length = len_a;
    }
    if(len_b > len_a) {
      while(i < len_b - len_a){
        a = '0' + a;
        i++;
      }
      length = len_b;
    }
    if(len_a == len_b){
      length = len_a;
    }
    string addString = "";
    int carry = 0;
    int char_a,char_b;
    int result = 0;
    for(i = length - 1;i >= 0;i--){
      char_a = a[i] - '0';
      char_b = b[i] - '0';
      result = (char_a ^ char_b ^ carry) + '0';
      addString = (char)result+addString;
      carry = (char_a & char_b) | (char_a & carry) | (char_b & carry);
    }
    if(carry){
      addString = '1' + addString;
    }
    return addString;
  }

  int getLinkedListLength(ListNode *head){
    int length = 0;
    ListNode *current = head;
    while(current != NULL){
      length ++;
      current = current->next;
    }
    return length;
  }

  ListNode *addList(ListNode *l1, ListNode *l2){
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

  int binarySearch(vector<int> &array, int target){
    int length = array.size();

    if (length < 1){
      return -1;
    }

    if(length == 1){
      if(array.at(length-1) == target){
        return length-1;
      }else{
        return -1;
      }
    }

    int start_index = 0;
    int end_index = length - 1;
    int middle = 0;
    int sum = 0;
    while(end_index - start_index > 1){
      sum = start_index + end_index;
      if(sum % 2 == 0){
        middle = sum / 2 + 1;
      }else{
        middle = sum / 2;
      }
      if(array.at(middle) < target){
        // upper half array
        start_index = middle + 1;
      }else{
        // lower half array include array.at(middle)
        end_index = middle;
      }
    }

    if(array.at(start_index) == target){
      return start_index;
    }
    if(array.at(end_index) == target){
      return end_index;
    }

    return -1;
  }

  vector<int> inorderTraversal(TreeNode *root){
    bool poped = false;
    vector<int> result;
    stack<TreeNode*> route;
    TreeNode* current = root;
    while(current != NULL){
      if(current->left != NULL && !poped) {
        route.push(current);
        current = current->left;
      }else{
        result.push_back(current->val);
        if(current->right == NULL){
          if(route.size() == 0){
            current = NULL;
          } else {
            current = route.top();
            poped = false;
          }
        }else{
          current = current->right;
        }
        route.pop();
        poped = true;
      }
    }
    return result;
  }
};

int main( int argc, const char* argv[]){
  int array[] = {1,2,3};
  int init_array[3] = {1,2,3};
  Tree *tree = new Tree(array,3);
  Solution sol;
  sol.inorderTraversal(tree->root);
}