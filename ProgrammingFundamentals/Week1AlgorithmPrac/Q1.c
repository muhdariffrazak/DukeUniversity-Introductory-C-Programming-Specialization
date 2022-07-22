//in C
#include <stdio.h>//no iostream but uses <stdio.h>

int main()
{
    float N;
    printf("Type in the number of N:");
    scanf("%f",&N);//scanf(is cin), %f is decimal floating point, reference N as val is stored in location of N 
    for (int i = 0; i < (2 * N); i++)
        if (i < N) {
            printf("%.0f\n" ,2 * (float)i );//Casting is used as i is a diff data type
        }
        else {
            printf("%.0f" ,(float)i );//%.0f is zero decimal point
            printf("\n");//can be placed with format specifier 

        }
}