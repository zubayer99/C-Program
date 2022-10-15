#include<stdio.h>
int main()
{
    int a[5];
    int i,max1,max2;

    printf("Enter 5 values : \n");
    for(i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
    max1=a[0];
    for(i=0; i<5; i++){
        if(a[i]>max1){
            max1=a[i];
        }
        else{
            max1=max1;
        }
    }
    if(max1==a[1]){
        max2=a[2];
    }
    else{
        max2=a[1];
    }
    for(i=0; i<5; i++){
        if(a[i]>max2 && a[i]!=max1){
            max2=a[i];
        }
        else if (max1>max2){
            max2=max2;
        }
    }

    printf("1st maximum number is %d\n",max1);
    printf("2nd maximum number is %d\n",max2);

    return 0;
}
