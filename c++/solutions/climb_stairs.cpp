//
// Created by Develop on 11/19/15.
//

#include "solution.h"

int Solution::climbStairs(int n) {
  if(n == 0) {
    return 1;
  }
  if(n == 1) {
    return 1;
  }
  if(n == 2) {
    return 2;
  }
  map<int,int> solved;
  solved[0] = 0;
  solved[1] = 1;
  solved[2] = 2;

  return (calClimbed(n-1,solved) + calClimbed(n-2,solved));
}

int Solution::calClimbed(int n, map<int, int> &solved) {
  map<int,int>::iterator it = solved.find(n);
  if (it == solved.end()){
    solved[n] = calClimbed(n-1,solved) + calClimbed(n-2,solved);
    return solved[n];
  } else {
    return it->second;
  }
};