#include <iostream>

void printStars(int i){
    for(int j=1;j<=i;j++){
        std::cout<<"*";//output star
    }
};

void main(){
    int N;
    std::cout<<"Enter number of N:";//takes in user input for n
    std::cin>>N;//stors user input in var n
    for(int i = 1;i<=N;i++){
        printStars(i);//print stars function
        std::cout<<"\n";
    }



}