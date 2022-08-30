#include<stdio.h>
int main()
{
   int a = 10,b = 20,c = 30;

   int* arr[] = {&a,&b,&c};

   printf("The values of variables are : \n");
   printf("a = %d, b = %d, c= %d\n",a,b,c);
   printf("*arr[0] = %d, *arr[1] = %d, *arr[2] = %d",*arr[0],*arr[1],*arr[2]);
   
   return 0;
}