#include <stdio.h>
int main()
{
  int a[10] ={11, 32, 63, 56, 82, 31, 4, 96, 2, -100};
  int i, max = 0;
  for (i = 0; i < 10; i++){
    if (a[i] > a[max]){
      max = i;
    }
  }
  printf("Maximum element is : %d\n", a[max]);

  return 0;
}
