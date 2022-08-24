#include<stdio.h>

/*
extern Storage Class :-

Scope :	Throughout the program
Lifetime :	As long as the program's execution doesn't come to an end.
Linkage :	External linkage
Default Value :	depends on datatype (0 , 0.0 , \0)
*/

//This is also a variable having extern storage class.

int global = 10;

int main()
{
// This is declaration of variable i
// Effect of extern variable is only inside the block in which it is declared
    extern int i ;  //initialised in 4_extern_storage_class2.c

// As like a variable we can also access the function
// which is defined in other program file (4_extern_storage_class2.c).
extern void fun();

// We can not initialise extern variable
// extern int i = 20;

printf("\nValue of external variable i is %d",i);

// Calling the function which is defined outside the file
fun();


}