#include<iostream>  
using namespace std;

int main(){
    //key in number of data, input data
    double * Array; //point to the location of array, double as storing double numbers
    cout<<"Enter number of Data: ";
    int Size =0;
    cin >> Size;
    Array = new double[Size];
    for(int i = 0; i < Size; i++){
        cin >> Array[i];}

    //  print array elements
    cout << "The data are: ";
    for (int n = 0; n < Size; ++n) {
    cout << Array[n] << "  "; }

    // sorting algorithm
    int a,b,c;
    double temp;
    for(a=0;a < Size;a++){
        for(b=a+1;b< Size; b++){
            if(Array[a] > Array[b]) {
                 temp = Array[b];
                 Array[b] = Array[a];
                 Array[a] = temp;
                 } 
            }
         }

    //prints out sorted element list
    cout <<"/nSorted Element List ...\n";
    for(c = 0; c<Size; c++) {
    cout <<Array[c]<<"\t";
    }
    return 0; 
    }






