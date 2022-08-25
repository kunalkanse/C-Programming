
// Find the average of three numbers

#include<stdio.h>
int main()
{
    int a,b,c,arg;

    printf("Enter values : ");
    scanf("%d %d %d",&a,&b,&c);

    arg = (a+b+c)/3;

    printf("Average of three numbers is : %d",arg);

    return 0;
}