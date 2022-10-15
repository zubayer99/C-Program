#include <stdio.h>
int main()
{
    int m,n,i;
    m = 0;
    for(n = 1 ; n <= 20 ; n = n + 1){
        m = m + n;
        for(i = 1; i <= 10 ; i = i + 1){
                m = m + i;
            printf("%d X %d = %d\n", n, i, m);
        }
    }
}
