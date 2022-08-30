
#include<stdio.h>

// to store marks of students

int main()
{
    int mark[5] = {10,20,30,40,50};
    int i = 4;

    // take input and store it in the 3rd element
    scanf("%d", &mark[2]);

    // take input and store it in the ith element
    scanf("%d", &mark[i-1]);
    //Here's how you can print an individual element of an array.

    // print the first element of the array
    printf("%d", mark[0]);

    // print the third element of the array
    printf("%d", mark[2]);

    // print ith element of the array
    printf("%d", mark[i-1]);

    return 0;
}
