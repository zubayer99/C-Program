#include <stdio.h>
int main()
{
    int x,y,i;
    scanf("%d %d", &x, &y);

    i = x + y;

    if(i <= 1000){
        printf("Yes");
    else if(i >= 500){
        printf("Yes");
    }
    }
    else{
        printf("No");
    }

}
