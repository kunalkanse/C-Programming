#include<stdio.h>

//structure decleration
struct demo1    //structure name
{
    int int1;   //structure elements
    float float1;
    char ch1;
};

int main()
{
    struct demo1 dobj1;   //structure object
    //memory is not allocated to the structure until object is created for respective structure 
    struct demo1 dobj2;  //we can create multiple object to single structure

    dobj1.int1 = 10;
    dobj1.float1 = 3.14;
    dobj1.ch1 = 'k';

    dobj2 = dobj1;  //storing elements of one object to another object of same structure

    printf("dobj1.int1 : %d\n",dobj1.int1);
    printf("dobj1.float1 : %f\n",dobj1.float1);
    printf("dobj1.ch1 : %c\n",dobj1.ch1);

    printf("\ndobj2.int1 : %d\n",dobj2.int1);
    printf("dobj2.float1 : %f\n",dobj2.float1);
    printf("dobj2.ch1 : %c\n",dobj2.ch1);

   return 0;
}