//Week 1 Stars Example
#include <stdio.h>

void printIstar (int i){//print star function
    for (int j=1;j<=i;j++){// for loop to iterate and print the number of correct stars
        printf("*");
    }
}

void main(){
    int N;
    printf("Type in number of N:");//input number of n
    scanf("%d",&N);//takes in input and stores it at reference point  N, annotated by &
      for (int i = 1; i <= N; i++) {
    // Print i stars, call star function
    printIstar(i);
    // Print a newline as newline is not in function 
    printf("\n");
  }

}