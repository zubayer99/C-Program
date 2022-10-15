#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d", &x, &y);

    z = x + y;

    if(z > 2000){
        if(z > 0){
            printf("YES");
        }
        if(z % 10 == 0){
            printf("YES,GOOD Number\n");
        }
        else if(z % 2 == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else if(z < 1000 ){
        if(z > 0){
            printf("YES");
        }
        else if(z % 10 == 0){
            printf("YES,GOOD Number\n");
        }
        else if(z % 2 == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }


    return 0;
}
