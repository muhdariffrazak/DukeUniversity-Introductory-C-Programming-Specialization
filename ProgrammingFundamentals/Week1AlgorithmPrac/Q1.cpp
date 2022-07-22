//in C++
#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Type in the number of N:";
    cin >> N;
    for (int i = 0; i < (2 * N); i++)
        if (i < N) {
            cout << 2 * i << endl;
        }
        else {
            cout << i<<endl;
        }
}