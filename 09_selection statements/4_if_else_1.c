#include<stdio.h>

/*
if (condition)
{
    // Executes this block if
    // condition is true
}
else
{
    // Executes this block if
    // condition is false
}*/

int main()
{
   int a = 0, b = 0;

   printf("Enter the value of a : \n");
   scanf("%d",&a);

   printf("Enter the value of b : \n");
   scanf("%d",&b);

   if(a>b)
   {
       printf("a is greater than b");
   }
   else
   {
       printf("b is greater than a");
   }

   return 0;
}