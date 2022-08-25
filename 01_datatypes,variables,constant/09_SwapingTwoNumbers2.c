#include<stdio.h>

//Swapping of two number without using temporary

int main()
{
    int number1, number2;

    printf("Enter value of number1 & number 2 : ");
    scanf("%d %d",&number1,&number2);

    printf("The values before swaping %d , %d\n",number1,number2);
    
    number2 = number1 + number2;    //number2 = 10 + 20
    number1 = number2 - number1;    //number1 = 30 - 10
    number2 = number2 - number1;    //number2 = 30 - 20

    printf("The values after swaping %d , %d",number1,number2);

    return 0;
}