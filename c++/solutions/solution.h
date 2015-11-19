//
// Created by Develop on 11/10/15.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../types/list_node.h"
#include "../types/tree_node.h"
#include <stddef.h>
#include <vector>
#include <string>
#include <stack>
#include <map>

#endif //LEETCODE_SOLUTION_H

using namespace std;

class Solution {
public:
  // Fibonacci
  int fibonacci(int n);
  int fib_iter(int a,int b,int count);

  // Remove Linked List Elements
  ListNode *removeElements(ListNode *head, int val);

  // Add Binary
  string addBinary(string& a, string& b);

  // Add Two Numbers
  int getLinkedListLength(ListNode *head);
  ListNode *getEndNode(ListNode *head);
  ListNode *addLists(ListNode *l1,ListNode *l2);

  // First Position of Target
  int binarySearch(vector<int> &array, int target);

  // Binary Tree Inorder Traversal
  vector<int> inorderTraversal(TreeNode *root);

  // Binary Tree Postorder Traversal
  vector<int> postorderTraversal(TreeNode *root);

  // Binary Tree Preorder Traversal
  vector<int> preorderTraversal(TreeNode *root);

  // Climbings Stairs
  int climbStairs(int n);
  int calClimbed(int n,map<int,int> &solved);

  // Compare Strings
  bool compareStrings(string A, string B);
};