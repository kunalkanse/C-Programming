
// convert temperature given in fahrenheit to celsius

#include<stdio.h>
int main()
{
    float fahr = 0.0, cel = 0.0;

    printf("Enter the temperature in fahrenheit to convert it into celsius : ");
    scanf("%f",&fahr);

    cel = 5.0/9.0 * (fahr - 32);

    printf("%.2f fahrenheit = %.2f celsius",fahr,cel);

    return 0;
}