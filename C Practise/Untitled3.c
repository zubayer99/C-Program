#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    int s1,s2,s3;
    printf("Enter value for a b c d e f serially\n");
    scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);
    char x = 'x';
    s1 = (a*x + b);
    s2 = (c*x + d);
    s3 = (e*x + f);
    printf("%d%c + %d%c + %d%c", s1,x,s2,x,s3,x);

}
