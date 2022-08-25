#include<stdio.h>

int main()
{
    int number1, number2, sum;
    double a, b, product;

    printf("Enter integer value of number1 & number 2 : ");
    scanf("%d %d",&number1,&number2);

    sum = number1 + number2;

    printf("%d + %d = %d", number1, number2, sum); 

    printf("Enter floating values of two numbers: ");
    scanf("%lf %lf", &a, &b);  
 
    // Calculating
    product = a * b;

    // %.2lf displays number up to 2 decimal point
    printf("Product = %.2lf", product);

    return 0;
}