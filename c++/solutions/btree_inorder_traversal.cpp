//
// Created by Develop on 11/10/15.
// Binary Tree Inorder Traversal
//

#include "solution.h"

vector<int> Solution::inorderTraversal(TreeNode *root) {
  vector<int> result;
  if(root == NULL){
    return result;
  }
  stack<TreeNode*> route;
  TreeNode* current = root;
  while(current != NULL || !route.empty()) {
    if(current != NULL){
      route.push(current);
      current = current->left;
    }else{
      TreeNode *node = route.top();
      route.pop();
      result.push_back(node->val);
      current = node->right;
    }
  }
  return result;
}