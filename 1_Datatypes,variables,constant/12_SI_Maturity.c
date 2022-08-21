
//simple interest & maturity amount

#include<stdio.h>
int main()
{
    float si,ma,p,i,t;

    printf("Enter principle , rate of interest , time(years) : ");
    scanf("%f %f %f",&p,&i,&t);

    si = (p*i*t)/100;
    ma = p + i;

    printf("Simple interest is %f And Maturity amount is %f",si,ma);

    return 0;
}