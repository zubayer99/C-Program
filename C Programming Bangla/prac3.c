#include <stdio.h>
int main()
{
    int i, j, a[9002];

    for(i = 0; i <= 9002; i++){
        a[i] = i;
    }

    j = 0;

    for(i = 0; i <= 9002; i++){
       j =  j + a[i];

    }

      printf("Sum of 1000 to 10001 is : %d", j);

    return 0;
}


