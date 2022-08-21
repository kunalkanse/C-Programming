
// convert velocity km/hr to m/s

#include<stdio.h>

int main()
{
    float age,age_in_sec;

    printf("Enter Age in years : ");
    scanf("%f",&age);

    age_in_sec = 3.156E7 * age;

    printf("Age in second is %f",age_in_sec);

    return 0;

}