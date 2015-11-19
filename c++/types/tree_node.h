//
// Created by Develop on 11/5/15.
//



#ifndef LEETCODE_TREE_NODE_H
#define LEETCODE_TREE_NODE_H

#include <stddef.h>

class TreeNode {
public:
  int val;
  TreeNode *left, *right;
  TreeNode(int val){
    this->val = val;
    this->left = this->right = NULL;
  }
};
#endif //LEETCODE_TREE_NODE_H
