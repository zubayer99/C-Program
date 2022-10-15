#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d", &x, &y);
    z = x + y;

    if(z > 2000){
        if(z % 10 == 0){
            printf("YES, Good Number\n");
        }
        else if(z % 2 == 0){
            printf("YES\n");
        }
        if(z < 0){
            printf("NO\n");
        }
        if(x < 0){
            printf("X is less than 0\n");
        }

    }
   else if(z < 1000){
        if(z % 2 >= 1){
            printf("YES\n");
        }
        if(z % 10 == 0 && z >= 0){
            printf("YES, Good Number\n");
        }
        if(z < 0){
            printf("NO\n");
        }
        if(x < 0){
            printf("X is less than 0\n");
        }

    }
    return 0;
}
