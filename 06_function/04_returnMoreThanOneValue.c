#include <stdio.h>

int add_sub(int, int , int*, int*);  //function decleration


int main()  //entry point function
{
    int sum = 0, diff = 0, i = 0, j = 0;

    printf("Enter the values of number 1 & number 2 : ");
    scanf("%d %d", &i, &j);

    add_sub(i, j,&sum,&diff); //function call

    printf("sum = %d\n",sum);
    printf("diff = %d",diff);

    return 0;
}

int add_sub(int x, int y, int* sum , int* diff)   //function definition
{
    *sum = x + y;
    *diff = x - y;
}
