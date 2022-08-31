#include<stdio.h>

//function pointer stores the address of the function

int (*fp)(int,int);
int maximum(int,int);

int main()
{
    int a = 10, b = 20,c = 0;   //function pointer prototype
    
    fp = maximum;           //assigning address of function to pointer

    c = fp(a,b);    //calling function using pointer

    printf("%d",c);    
    return 0;
}

int maximum(int a, int b)
{
    return a + b;
}

