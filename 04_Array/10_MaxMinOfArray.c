#include<stdio.h>
int main()
{
   int arr[10],min,max,i;

   printf("Enter 10 Elements : \n");
   for(i = 0 ; i < 10 ; i++)
   {
       scanf("%d",&arr[i]);
   }

   min = max = arr[0];

   for(i = 0 ; i < 10 ; i++)
   {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        else if(arr[i] > max)
        {
            max = arr[i];
        }
   }

   printf("\nMaximum element of array is : %d\n",max);
   printf("minimum element of array is : %d\n",min);
   
   return 0;
}