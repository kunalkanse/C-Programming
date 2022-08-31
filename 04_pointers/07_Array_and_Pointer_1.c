#include<stdio.h>

int main()
{
   int x[4] = {10,20,30,40};
   int i;
    
   for(i = 0; i < 4; ++i) {
      printf("x[%d] = %d\n", i,x[i]);
   }

   for(i = 0; i < 4; ++i) {
      printf("&x[%d] = %p\n", i, &x[i]);
   }

   printf("Address of array x: %p", x);
   
   //name of array contains base address of array

   return 0;
}