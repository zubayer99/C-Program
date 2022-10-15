#include <stdio.h>
int main()
{
    int a[5], b[5], ab[5];
    int i;

    printf("Value of A:\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    printf("Value of B:\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &b[i]);
    }

    for(i = 0; i< 5; i++){
        ab[i] = a[i] + b[i];
    }
    printf("Value of AB array: \n");
    for(i = 0; i < 5; i++){
        printf("%d", ab[i]);
    }

    return 0;
}
