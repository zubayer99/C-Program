#include <stdio.h>
int main()
{
    int m,n,i;
    scanf("%d", &m);
    scanf("%d", &n);


    for(i = 1; i <= 10; i = i + 1){
       printf("%d X %d = %d\n", n, i, m);
    }

    return 0;
}
