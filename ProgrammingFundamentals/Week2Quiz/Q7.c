#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a = 2;
    int b = 6;
      while (a <= b) {//while a(inclusive) is lesser than b (inclusive)
    if (a % 2 == 1) {//modulous of 2 compared with 1
      printf("a is %d\n", a);//std:: is required as we did not include "using namespace std"
    }
    else {
      printf("b is %d\n", b);
      for (int i = 0; i < b - a ; i++) {
        printf("a * i + b = %d\n", a * i + b);
      }
    }
    a++;//shorthand
    b--;//shorthand 
  }
  return 0;
}