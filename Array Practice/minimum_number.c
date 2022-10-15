#include <stdio.h>
int main()
{
  int a[10] ={-1, -2, -3, 0, 0, 0, 1, 1, 1, -100};
  int i, min = 0;
  for (i = 1; i < 10; i++){
    if (a[i] < a[min]){
      min = i;
    }
  }
  printf("Minimum element is : %d\n", a[min]);

  return 0;
}
