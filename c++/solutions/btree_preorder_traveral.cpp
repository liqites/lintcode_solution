//
// Created by Develop on 11/19/15.
//

#include "solution.h"

vector<int> Solution::preorderTraversal(TreeNode *root) {
  vector<int> result;
  stack<TreeNode*> route;
  TreeNode* current = root;

  if(root == NULL){
    return result;
  }

  while((current != NULL || !route.empty())){
    if(current->right != NULL){
      route.push(current->right);
    }

    if(current != NULL){
      result.push_back(current->val);
    }

    if(current->left != NULL) {
      current = current->left;
    } else {
      if (route.empty()) {
        current = NULL;
      }
      else {
        current = route.top();
        route.pop();
      }
    }
  }

  return result;
}