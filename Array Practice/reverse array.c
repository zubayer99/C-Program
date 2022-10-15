#include <stdio.h>
int main()
{
    int a[6]={1,2,3,4,5,6};
    int b[6];
    int i,n;
    n=5;
    for(i=0; i<6; i++){
      b[n] = a[i];
      n--;
    }
    for(i=0; i<6; i++){
      printf("%d %d\n", a[i], b[i]);
    }
    return 0;
}
