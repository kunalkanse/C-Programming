#include<stdio.h>

//Swapping of two number using temporary


int main()
{
    int number1, number2, number3;

    printf("Enter value of number1 & number 2 : ");
    scanf("%d %d",&number1,&number2);

    printf("The values before swaping %d , %d\n",number1,number2);
    
    number3 = number1;
    number1 = number2;
    number2 = number3;

    printf("The values after swaping %d , %d",number1,number2);

    return 0;
}