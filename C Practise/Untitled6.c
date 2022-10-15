#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value for a b c serially\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && b>c){
        printf("%d %d %d", a, b, c);
    }
    else if(a>b && b<c){
        printf("%d %d %d", a, c, b);
    }
    else if(a<b && b>c){
        printf("%d %d %d", b, c, a);
    }
    else if(a<b && b<c){
        printf("%d %d %d", c, b, a);
    }
    else{
        printf("%d %d %d", c, a, b);
    }

    return 0;

}
