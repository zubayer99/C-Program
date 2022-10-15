#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter value for a b c d serially\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a>b && a>c && a>d){
        if(b>c && b>d){
            if(c>d){
                printf("%d %d %d %d", a, b, c, d);
            }
            else{
                printf("%d %d %d %d", a, b, d, c);
            }
        }
        else if(c>b && c>d){
            if(b>d){
                printf("%d %d %d %d", a, c, b, d);
            }
            else{
                printf("%d %d %d %d", a, c, d, b);
            }

        }
        else if(d>b && d>c){
            if(b>c){
                printf("%d %d %d %d", a, d, b, c);
            }
            else{
                printf("%d %d %d %d", a, d, c, b);
            }
        }
    }
    else if(b>a && b>c && b>d){
        if(a>c && a>d){
            if(c>d){
                printf("%d %d %d %d", b, a, c, d);
            }
            else{
                printf("%d %d %d %d", b, a, d, c);
            }
        }
        else if(c>a && c>d){
            if(a>d){
                printf("%d %d %d %d", b, c, a, d);
            }
            else{
                printf("%d %d %d %d", b, c, d, a);
            }
        }
        else if(d>a && d>c){
             if(a>c){
                printf("%d %d %d %d", b, d, a, c);
             }
             else{
                printf("%d %d %d %d", b, d, c, a);
             }
         }
    }
    else if(c>a && c>b && c>d){
        if(a>b && a>d){
            if(b>d){
                printf("%d %d %d %d", c, a, b, d);
            }
            else{
                printf("%d %d %d %d", c, a, d, b);
            }
        }
        else if(b>a && b>d){
            if(a>d){
                printf("%d %d %d %d", c, b, a, d);
            }
            else{
                printf("%d %d %d %d", c, b, d, a);
            }
        }
        else if(d>a && d>b){
            if(a>b){
                printf("%d %d %d %d", c, d, a, b);
            }
            else{
                printf("%d %d %d %d", c, d, b, a);
            }
        }
    }
    else if(d>a && d>b && d>c){
        if(a>b && a>c){
            if(b>c){
                printf("%d %d %d %d", d, a, b, c);
            }
            else{
                printf("%d %d %d %d", d, a, c, b);
            }
        }
        else if(b>a && b>c){
            if(a>c){
                printf("%d %d %d %d", d, b, a, c);
            }
            else{
                printf("%d %d %d %d", d, b, c, a);
            }
        }
        else if(c>a && c>b){
            if(a>b){
                printf("%d %d %d %d", d, c, a, b);
            }
            else{
                printf("%d %d %d %d", d, c, b, a);
            }
        }
    }

    return 0;

}
