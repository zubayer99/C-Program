#include <stdio.h>
int main()
   {
    int xub, n, m, evensum=0, alt1=0,alt2=0,alt_even=0;
    int b[xub];
    int a[10] = {9,4,1,2,3,6,10,8,30,2};
    for(xub=1, n = 0; xub<10; xub+=2){
    n = (xub+n) % 2;

    a[n] = xub*3 - 1 + a[n];


    }
    printf("\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);

    return 0;
}































