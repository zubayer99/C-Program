#include<stdio.h>
int main()
{
    int i,j,n;
    int sum1 = 0;
    int sum2 = 0;
    int final_sum = 0;

    int a[25] = {0, 8, 7, 7, 18, 12, 18, 8, 11, 18, 1, 8, 11, 1, 7, 1, 12, 12, 11, 0, 8, 7, 7, 18, 12};
    int b[25] = {-1, -8, -11, -1, -7, -1, -12, -12, -11, -0, -8, -7, -7, -18, -12, -18, -8, -11, -18, -1, -8, -11, -1, -7, -1};


    for(i=0; i<25; i++){
        sum1 = sum1 + a[i];
    }

    for(i=0; i<25; i++){
        sum2 = sum2 + b[i];
    }

    final_sum = final_sum + sum1 + sum2;

    printf("Sum is : %d", final_sum);

    return 0;
}

