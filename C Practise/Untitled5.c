#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Please enter value for a b c d e serially\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(a>b){
        if(a>c){
            if(a>d){
                if(a>e){
            printf("The largest number is %d", a);
            }
         }
       }
    }
    if(b>a){
          if(b>c){
                if(b>d){
                    if(b>e){
            printf("The largest number is %d", b);
            }
          }
       }
    }
    if(c>a){
          if(c>b){
                if(c>d){
                    if(c>e){
            printf("The largest number is %d", c);
            }
         }
       }
    }
    if(d>a){
         if(d>b){
                if(d>c){
                     if(d>e){
            printf("The largest number is %d", d);
            }
         }
       }
    }
    if(e>a){
         if(e>b){
                if(e>c){
                     if(e>d){
            printf("The largest number is %d", e);
            }
         }
       }
    }
    return 0;
}
