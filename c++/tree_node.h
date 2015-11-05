//
// Created by Develop on 11/5/15.
//

#include <stddef.h>

#ifndef LEETCODE_TREE_NODE_H
#define LEETCODE_TREE_NODE_H

#endif //LEETCODE_TREE_NODE_H
class TreeNode {
public:
  int val;
  TreeNode *left, *right;
  TreeNode(int val){
    this->val = val;
    this->left = this->right = NULL;
  }
};