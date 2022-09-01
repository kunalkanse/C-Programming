#include <stdio.h>

//passing array element to function one by one using pass by address

int sum_array(int *address, int sum);

int main()
{
    int arr[10], sum = 0, i = 0;

    printf("Enter element in array : \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        sum = sum_array(&arr[i], sum); //passing element one by one
    }

    printf("sum of array elements : %d", sum);

    return 0;
}

int sum_array(int *address, int sum)
{
    return sum + *address;
}