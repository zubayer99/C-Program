#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Please enter value for a b c serially\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        if(a>c){
            printf("The largest number is %d", a);
        }
        else{
            printf("The largest number is %d", c);
        }
    }

    else{
        if(b>c){
            printf("The largest number is %d", b);
        }
        else{
            printf("The largest number is %d", c);
        }
    }
    return 0;
}
