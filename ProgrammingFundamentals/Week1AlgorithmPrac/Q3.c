#include <stdio.h>
#include <stdio.h>

int main(void){
    int N;
    printf("Enter number of N:");
    scanf("%d",&N);//stores the input/num keyed in the address of N
    for (int i = 0; i < (2 * N); i++)
        if (i < N) {
            printf("%d\n",2 * i);
        }
        else {
            printf("%d\n",i);
        }
}
