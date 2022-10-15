#include <stdio.h>
int main()
{
    int a[5], b[5], c[5], i;
    int suma=0,sumb=0,sumc=0;

    printf("Enter 5 values for a array : \n");
    for(i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter 5 values for b array : \n");
    for(i=0; i<5; i++){
        scanf("%d",&b[i]);
    }
    printf("Enter 5 values for c array : \n");
    for(i=0; i<5; i++){
        scanf("%d",&c[i]);
    }
    for(i=0; i<5; i++){
        suma = suma + a[i];
    }
    printf("Sum of a array = %d\n", suma);
    for(i=0; i<5; i++){
        sumb = sumb + b[i];
    }
    printf("Sum of b array = %d\n", sumb);
    for(i=0; i<5; i++){
        sumc = sumc + c[i];
    }
    printf("Sum of c array = %d\n", sumc);

    if(suma>sumb && suma>sumc){
        printf("Sum of a array is largest");
    }
    else if(sumb>suma && sumb>sumc){
        printf("Sum of b array is largest");
    }
    else if(sumc>suma && sumc>sumb){
        printf("Sum of c array is largest");
    }
    return 0;
}
