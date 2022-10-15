#include <stdio.h>
int main()
{
    int size, i, j, n ;

    printf("Enter the size for array a and array b:\n");
     scanf("%d", &size);
    int a[size], b[size];
    printf("Enter %d element for a array:\n", size);
     for (i = 0; i < size; i++){
      scanf("%d", &a[i]);
    }
    printf("Enter %d element for b array:\n", size);
     for (i = 0; i < size; i++){
      scanf("%d", &b[i]);
    }

    for(i=0;i<20;i++){
            for(j=0;j<20;j++){
                n = a[i]*b[j];
            }
            i++;
        printf("Ans is %d\n", n);
    }

    return 0;

}

