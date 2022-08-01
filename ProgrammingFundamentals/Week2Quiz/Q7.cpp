#include <iostream>

int main (void) {
  int a = 2;
  int b = 6;
  while (a <= b) {//while a(inclusive) is lesser than b (inclusive)
    if (a % 2 == 1) {//modulous of 2 compared with 1
    std::cout<<"a is : "<<a<<std::endl;//std:: is required as we did not include "using namespace std"
    }
    else {
       std::cout<<"b is : "<<b<<std::endl;;
      for (int i = 0; i < b - a ; i++) {
        std::cout<<"a * i + b = "<<a * i + b<<std::endl;
      }
    }
    a++;//shorthand +1
    b--;//shorthand -1
  }
  return 0;
}