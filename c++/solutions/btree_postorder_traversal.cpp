//
// Created by Develop on 11/11/15.
// Binary Tree Post Order Traversal
//

#include "solution.h"

vector<int> Solution::postorderTraversal(TreeNode *root) {
  vector<int> result;
  stack<TreeNode*> route;
  TreeNode* current = root;
  TreeNode* previous = NULL;

  if (root == NULL) {
    return result;
  }

  route.push(root);

  while(!route.empty()){
    current = route.top();

    if (previous == NULL || previous->left == current || previous->right == current){
      if(current->left != NULL) {
        route.push(current->left);
      } else if (current->right != NULL ) {
        route.push(current->right);
      } else {
        result.push_back(current->val);
        route.pop();
      }
    } else if (current->left == previous){
      if (current->right != NULL) {
        route.push(current->right);
      } else {
        result.push_back(current->val);
        route.pop();
      }
    } else if (current->right == previous){
      result.push_back(current->val);
      route.pop();
    }

    previous = current;
  }

  return result;
}