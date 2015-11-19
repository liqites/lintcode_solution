//
// Created by Develop on 11/5/15.
//

#include "tree.h"

Tree::Tree(int *array, int size) {
  int current;
  TreeNode *root;
  this->root = root = NULL;
  for(int i = 0;i<size;i = i+2){
    current = i;
    if(this->root == NULL){
      root = new TreeNode(array[current]);
      this->root = root;
    }
    if(current + 1 < size && array[current + 1] != -1){
      root->left = new TreeNode(array[current + 1]);
    }
    if(current + 2 < size && array[current + 2] != -1){
      root->right = new TreeNode(array[current + 2]);
    }
    root = root->right;
  }
}