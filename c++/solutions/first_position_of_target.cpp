//
// Created by Develop on 11/10/15.
// First Position of Target
//

#include "solution.h"

int Solution::binarySearch(vector<int> &array, int target) {
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