#include <iostream>

int anotherFunction(int a, int b) {//declaration & defination of first func
  int answer = 42;
  int x = 0;
  printf("In anotherFunction(%d,%d)\n",a,b);
  while (b > a) {
    std::cout<<"a is: "<<a<<" b is: "<<b<<std::endl;//std:: is needed as did not declare using namespace std
    answer = answer + (b - a);
    b -= x;
    a += x / 2;
    x++;
  }
  return answer;
}

int someFunction(int x, int y) {//declaration & defination of second func
  int a = x + y;
  if (x < y) {
    for (int i = 0; i < x; i++) {
      std::cout<<"In the loop with i = "<<i<<" , a = "<<a<<std::endl;
      a = a + x;
    }
  }
  else {
    y = anotherFunction(y,a+4);
  }
  return a * y;
}

int main(void) {
  int x = 2;
  int a = someFunction(x,3);
  std::cout<<"a = "<<a<<std::endl;
  std::cout<<"x = "<<x<<std::endl;
  return 0;
}