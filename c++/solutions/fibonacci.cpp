//
// Created by Develop on 11/10/15.
// Fibonacci
//

#include "solution.h"

int Solution::fibonacci(int n){
  return fib_iter(1, 0, n - 1);
}

int Solution::fib_iter(int a,int b,int count){
  if (count == 0) {
    return b;
  } else {
    return fib_iter(a + b, a, count - 1);
  }
}