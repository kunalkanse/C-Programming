
// find the area & circumfereance of circle with radius

#include<stdio.h>
#define pi 3.14

int main()
{
    float r,area,cir;

    printf("Enter the redius : ");
    scanf("%f",&r);

    area = 2*pi*r;
    cir = pi*r*r;

    printf("Area is %.2f & circumference is %.2f",area,cir);

    return 0;
}