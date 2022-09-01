#include<stdio.h>

//passing whole array to function using pointer type

int sum_array(int[][5],int,int);

int main()
{
    int arr[2][5],sum = 0 ,i = 0,j = 0;

    printf("Enter element in array : \n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    sum = sum_array(arr,2,5);
    
    printf("sum of array elements : %d",sum);

    return 0;
}

int sum_array(int brr[][5],int row,int colomn)
{
    int i = 0,j = 0,sum = 0;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < colomn; j++)
        {
            sum = sum + brr[i][j];
        }
    }

    return sum;
}