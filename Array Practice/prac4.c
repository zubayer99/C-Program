#include <stdio.h>
int main()
{
    int a[50] = {0, 1, 8, 8, 7, 11, 7, 1, 18, 7, 12, 1, 18, 12, 8, 12, 11, 11, 18, 0, 1, 8, 8, 7, 11, 7, 1, 18, 7, 12, 1, 18, 12, 8, 12, 11, 11, 18, 0, 1, 8, 8, 7, 11, 7, 1, 18, 7, 12, 1};
    int i;
    int sum=0;



    for(i=0; i<50; i +=2){

        sum+=a[i];
    }
     printf("sum of array is : %d",sum);

    return 0;
}
