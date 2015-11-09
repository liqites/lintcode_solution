//
// Created by Develop on 11/9/15.
//

#include "utils.h"
void Utils::print_vector(std::vector<int> v){
  for(std::vector<int>::const_iterator i = v.begin();i != v.end();i++){
    std::cout << *i << " ";
  }
}