#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d", &x, &y);
    z = x + y;

    if(z < 1000){
        printf("Yes");
    }
    else(z%2 >= 1){
        printf("Yes");
    }
    else if{
        printf("No");
    }
    return 0;
