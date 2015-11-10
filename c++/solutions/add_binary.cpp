//
// Created by Develop on 11/10/15.
// Add Binary
//

#include "solution.h"

string Solution::addBinary(string &a, string &b) {
  // make string equal
  int len_a = a.size();
  int len_b = b.size();
  int i = 0;
  int length = 0;
  if(len_a > len_b) {
    while(i < len_a - len_b){
      b = '0' + b;
      i++;
    }
    length = len_a;
  }
  if(len_b > len_a) {
    while(i < len_b - len_a){
      a = '0' + a;
      i++;
    }
    length = len_b;
  }
  if(len_a == len_b){
    length = len_a;
  }
  string addString = "";
  int carry = 0;
  int char_a,char_b;
  int result = 0;
  for(i = length - 1;i >= 0;i--){
    char_a = a[i] - '0';
    char_b = b[i] - '0';
    result = (char_a ^ char_b ^ carry) + '0';
    addString = (char)result+addString;
    carry = (char_a & char_b) | (char_a & carry) | (char_b & carry);
  }
  if(carry){
    addString = '1' + addString;
  }
  return addString;
}