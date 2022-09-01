#include<stdio.h>

//passing whole array to function using pointer type

int sum_array(int*,int);

int main()
{
    int arr[10],sum = 0 ,i = 0;

    printf("Enter element in array : \n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }

    sum = sum_array(arr,10);
    
    printf("sum of array elements : %d",sum);

    return 0;
}

int sum_array(int* brr,int size)
{
    int i = 0,sum = 0;

    for(i = 0; i < size; i++)
    {
        sum = sum + *(brr + i);
    }

    return sum;
}