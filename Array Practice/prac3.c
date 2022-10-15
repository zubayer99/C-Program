#include <stdio.h>
int main()
{
    int a[50] = {0, 1, 8, 8, 7, 11, 7, 1, 18, 7, 12, 1, 18, 12, 8, 12, 11, 11, 18, 0, 1, 8, 8, 7, 11, 7, 1, 18, 7, 12, 1, 18, 12, 8, 12, 11, 11, 18, 0, 1, 8, 8, 7, 11, 7, 1, 18, 7, 12, 101};
    int i, j, sum;


    printf("All elements of a given array\n");
    for (i = 0; i < 49; i++){
        printf( "%d\n", a[i]) ;
    }
    for (a[i]= 0; a[i] < 49; i++){

    }

    sum = 0;

    for(i = 0; i < 50; i++){
        sum = sum + i;
    }

    printf("The sum of alternate numbers:%d", sum);

    return 0;
}
