#include<stdio.h>

// This is the dafault storage class for all local variables.
// 

/*
auto Storage Class :-

memoty location : stack frame of the function
Scope :				local (Inside the block only)
Lifetime :			local   (through out the function)
Linkage :			No linkage
Default Value :		Garbage
*/

int a = 10;     //Global variable

void fun(int i)
{   //scope starts

    auto int k = 10;    //local variable with initialised
    auto int l;         //local variable with garbage

    //auto keyword is optional
    //without keyword the variable also can be considered as auto variable

    int i = 10;     //local variable with initialised
    int j;          //local variable with garbage
    
    //scope ends
}

int main()
{
    printf("Inside main");
    fun(10);

    // This is not allowed to access auto variable outside its scope (function block)

	// printf("%d",i);   //Error

    return 0;
}
