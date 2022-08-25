
// convert velocity km/hr to m/s

#include<stdio.h>

int main()
{
    float vel_km , vel_m;

      printf("Enter velocity in km/hr : ");
    scanf("%f",&vel_km);

    vel_m = vel_km*5/18;

    printf("velocity is %.2f",vel_m);

    return 0;

}