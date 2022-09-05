#include<stdio.h>

struct demo
{
    int a;
    float b;
};

int main()
{
   struct demo dobj[3];

   dobj[0].a = 10;
   dobj[0].b = 45.45;

   dobj[1].a = 20;
   dobj[1].b = 87.5;

   dobj[2].a = 30;
   dobj[2].b = 8.45;

    for(int i = 0; i < 3; i++)
    {
        printf("dobj[%d].a = %d\ndobj[%d].b = %.2f\n\n",i,dobj[i].a,i,dobj[i].b);
    }
    
    printf("size of demo = %d",sizeof(dobj));

   return 0;
}