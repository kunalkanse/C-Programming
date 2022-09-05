#include<stdio.h>

//structure decleration
struct demo1    //structure name
{
    int int1;   //structure elements
    float float1;
    char ch1;
};

//decleration + defination
struct hello    //structure name
{
    int int1;   //structure elements
    float float1;
    char ch1;

}hobj = {20,6.10,'a'};  //member initialization method

int main()
{
    struct demo1 dobj1;   //structure object
    //memory is not allocated to the structure until object is created for respective structure 
    struct demo1 dobj2;  //we can create multiple object to single structure

    struct hello hobj2;
    struct hello *ptr = &hobj2;     //we can create pointer pointing to the structure by assigning the address

   return 0;
}
