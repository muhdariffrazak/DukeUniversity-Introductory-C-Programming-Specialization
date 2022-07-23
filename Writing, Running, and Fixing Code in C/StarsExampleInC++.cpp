#include <iostream>
using namespace std;

void printStars(int i){
    for(int j=1;j<=i;j++){
        cout<<"*";//output star
    }
};

void main(){
    int N;
    cout<<"Enter number of N:";//takes in user input for n
    cin>>N;//stors user input in var n
    for(int i = 1;i<=N;i++){
        printStars(i);//print stars function
        cout<<"\n";
    }



}