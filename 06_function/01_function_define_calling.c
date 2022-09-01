#include <stdio.h>

int add(int, int);  //function decleration
int sub(int x, int y);  //function decleration

int main()  //entry point function
{
    int sum = 0, diff = 0, i = 0, j = 0;

    printf("Enter the values of number 1 & number 2 : ");
    scanf("%d %d", &i, &j);

    gap();

    sum = add(i, j);  //function call
    printf("Sum = %d\n", sum);  

    diff = sub(i, j); //function call
    printf("difference = %d", diff);

    return 0;
}

int add(int x, int y)   //function definition
{
    int ret = 0;    // function body
    ret = x + y;
    return ret;

}

int sub(int x, int y)   //function definition
{
    int ret = 0;    // function body
    ret = x - y;
    return ret;
}