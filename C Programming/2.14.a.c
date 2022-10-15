#include <stdio.h>
 int main()
 {
     double num1, num2, sum1, sum2, sum3, sum4;


     printf("Please enter a number: ");
     scanf("%lf", &num1);
     printf("Please enter another number: ");
     scanf("%lf", &num2);

     sum1 = num1 + num2;
     sum2 = num1 - num2;
     sum3 = num1 * num2;
     sum4 = num1 / num2;

     char a = '+';
     char b = '-';
     char c = '-';
     char d = '/';

     printf("%lf  %c %lf = %lf\n", num1, a, num2, sum1);
     printf("%lf  %c %lf = %lf\n", num1, b, num2, sum2);
     printf("%lf  %c %lf = %lf\n", num1, c, num2, sum3);
     printf("%lf  %c %lf = %lf\n", num1, d, num2, sum4);

     return 0;
 }
