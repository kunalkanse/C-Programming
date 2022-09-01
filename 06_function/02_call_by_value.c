#include <stdio.h>

//call by variable

void swap(int, int);  //function decleration


int main()  //entry point function
{
    int i = 0, j = 0;

    printf("Enter the values of number 1 & number 2 : ");
    scanf("%d %d", &i, &j);
    
    printf("before swap function values are %d and %d\n",i,j);
    swap(i, j);  //function call
    printf("\nafter swap function values are %d and %d",i,j);

    //as we see changes made in called function are not refleced inside calling function

    return 0;
}

void swap(int x, int y)   //function definition
{
    x = x + y;
    y = x - y;
    x = x - y;

    printf("\nin swap function values are %d and %d\n",x,y);
}
