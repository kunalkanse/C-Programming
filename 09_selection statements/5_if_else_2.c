#include<stdio.h>

int main()
{
   int a = 0;

   printf("Enter the value to check odd even : \n");
   scanf("%d",&a);

   if(a%2 == 0)
   {
       printf("a is Even");
   }
   else
   {
       printf("a is odd");
   }

   return 0;
}