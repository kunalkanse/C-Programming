#include<stdio.h>

// Program to find the average of n numbers using arrays

int main()
{
    int i,size,sum = 0,average = 0;

    printf("Enter how many elements do you want : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter %d elements : \n",size);
    for(i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);

        // adding integers entered by the user to the sum variable
        sum += arr[i];

    }

    average = sum / size;

    printf("Average = %d",average);
}