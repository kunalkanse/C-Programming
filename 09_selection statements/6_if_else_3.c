#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int);

bool CheckEven(int no)
{
    if(no%2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
   bool Bret;
   int no;

   printf("Enter the value to check odd even : \n");
   scanf("%d",&no);

   Bret = CheckEven(no);

   if(Bret == true)
   {
       printf("number is even");
   }
   else
   {
       printf("number is odd");
   }
   
   return 0;
}