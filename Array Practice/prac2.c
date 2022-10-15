#include <stdio.h>
int main()
{
    int i, j, k, a[9002];
    k = 1000;
    for(i = 1000 - k; i < 10001; i++){
            a[i] = i;
        printf("a[%d] = %d\n", i, a[i]);
    }
 //First loop end
    j = 0;

    for(i = 1000; i < 10001; i++){
       j =  j + a[i];
    }
 //Second loop end
      printf("Sum of 1000 to 10001 is : %d", j);


    return 0;
}
