#include <stdio.h>
int main()
{
    int i, sum = 0, sum1 = 0, sum2 = 0, alt_sum = 0;
    int a[4] = {1,2,3,4};
    for(i=0; i<4; i++){
        sum +=a[i];
    }
    printf("sum of array is : %d",sum);

    for(i=0; i<4; i +=2){
        sum1 += a[i];
    }


    alt_sum += sum1 - (sum-sum1);


    printf("\nalternating sum of array is : %d", alt_sum);
w
    return 0;
}
