
// find area of triange whose sides are a,b,c
/*
This C Program calculates the area of a triangle given it's three sides.
The formula or algorithm used is: Area = sqrt(s(s – a)(s – b)(s – c)),
where s = (a + b + c) / 2 or perimeter / 2. and a, b & c are the sides of triangle.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,s,area;

      printf("Enter values of sides a,b,c : ");
    scanf("%f %f %f",&a,&b,&c);

    s = (a+b+c)/2;
    area = sqrt(s*(s*a)*(s*b)*(s*c));

    printf("Area of thriange is %.2f",area);

    return 0;

}