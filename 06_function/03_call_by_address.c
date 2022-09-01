#include <stdio.h>

//call by address (reference)

void swap(int*, int*);  //storing address of input arguments in pointer type variable


int main()  //entry point function
{
    int i = 0, j = 0;

    printf("Enter the values of number 1 & number 2 : ");
    scanf("%d %d", &i, &j);
    
    printf("before swap function values are %d and %d\n",i,j);

    swap(&i, &j);   //passing address of i & j to the swap function

    printf("\nafter swap function values in main function are %d and %d",i,j);

    //as we see changes made in called function refleced inside calling function

    return 0;
}

void swap(int* x, int* y)   //storing address of input arguments in pointer type variable
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;

    printf("\nin swap function values are %d and %d\n",*x,*y);
}
