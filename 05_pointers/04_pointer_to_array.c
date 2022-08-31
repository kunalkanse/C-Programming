#include<stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};

    int *p = &(arr[1]);
    int *q = &(arr[3]);

    printf("arr[1] : %d\n",arr[1]);
    printf("*p : %d\n",*p);

    printf("\narr[3] : %d\n",arr[3]);
    printf("*q : %d\n",*q);
    
    printf("\n&p : %d\n",&p);
    printf("&q : %d\n",&q);

    printf("\n&(arr[1]) : %d\n",&(arr[1]));
    printf("p : %d\n",p);

    //name of array is internally address of first element
    printf("\narr : %d",arr);
    printf("\n&arr : %d",&arr);

    return 0;
}