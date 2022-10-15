#include <stdio.h>
int main()
{
  int i, j, a[1000];

  for(i = 0; i <= 1000; i++){
      a[i]= i;
    }
   j = 0;
  for(i = 0; i <= 1000; i++){
      j = j + a[i];

    }

      printf("Sum of 1 to 1000 is : %d", j);

    return 0;
}

