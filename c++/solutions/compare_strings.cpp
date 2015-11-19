//
// Created by Develop on 11/19/15.
//

#include "solution.h"

bool Solution::compareStrings(string A, string B) {
  std::size_t found;
  for(int i = 0; i < B.length(); i ++){
    found = A.find(B[i]);
    if (found != string::npos) {
      A.erase(found,1);
    } else {
      return false;
    }
  }
  return true;
}