#include <stdio.h>
int main()
{
    int a[10];
    int i;
    int j;

    for(i = 0; i < 10; i++){
        printf("Input the integer number %d : ", i+1);
        scanf("%d", &a[i]);
    }

    j = a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7] + a[8] + a[9];

    printf("The sum of your inputed value is: %d", j);

    return 0;
}
