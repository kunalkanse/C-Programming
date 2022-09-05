#include <stdio.h>

//structure decleration
struct demo1 //structure name
{
    int int1; //structure elements
    float float1;
    char ch1;
};

//decleration + defination
struct hello //structure name
{
    int int1; //structure elements
    float float1;
    char ch1;
} hobj1 = {20, 6.10, 'a'}; //storing elements

int main()
{
    struct demo1 dobj1; //structure object
    //memory is not allocated to the structure until object is created for respective structure
    struct demo1 dobj2; //we can create multiple object to single structure

    struct hello hobj2 = {54, 2.45, 'm'};

    dobj1.int1 = 10;
    dobj1.float1 = 3.14;
    dobj1.ch1 = 'k';

    printf("Accessing Elements using . operator (direct accessing opearator)\n");
    printf("dobj1.int1 : %d\n", dobj1.int1);
    printf("dobj1.float1 : %f\n", dobj1.float1);
    printf("dobj1.ch1 : %c\n", dobj1.ch1);
    printf("\n");

    printf("%d\n", hobj1.int1);
    printf("%f\n", hobj1.float1);
    printf("%c\n", hobj1.ch1);
    printf("\n");

    return 0;
}
