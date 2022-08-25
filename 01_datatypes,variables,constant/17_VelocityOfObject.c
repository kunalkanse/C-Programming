
// find the velocity of the object after tima t

#include<stdio.h>

int main()
{
    float v,u,a,t;

    printf("Enter initial velocity : ");
    scanf("%f",&u);

    printf("Enter acceleration : ");
    scanf("%f",&a);

    printf("Enter time in sec : ");
    scanf("%f",&t);

    v = u*a+t;

    printf("velocity is %.2f",v);

    return 0;

}