#include<stdio.h>

/*

static Storage Class :-

Scope :		Local to the block, in which the variable is defined
Lifetime :	Value of the variable persists between different function calls.
Linkage :	1) no linkage for local static. 2) internal linkage for Global static.
Default Value :	depend on datatype (0, 0.0 , \0)
Memory Allocated:	data section - bss / non bss

*/

/*
There are two types of static variables as 

1. Local Static : static variable inside a method or function retains its value between invocations.
2. Global Static : static variable declared globally can called by any function or method, 
	so long as those functions appear in the same file as the static variable.
*/

static int Global_static  = 10;     // global static variable

void Fun_Normal()       // called 3 times from main 
{
	// This is local static variable
	// whose value persist throughout the function call.
	// Initialisation of static variable only once

	static int i = 10 ;

	// Incrementing value of i
	++i;

	printf("\nValue of i from Fun_Normal is %d",i);
	printf("\nAddress of static variable is %u",&i);

}

// Recursive function which uses static variable
void Gun_Recursive_Static()
{
	static int j = 5;

	j--;

	if(j != 0)
	{
		printf("\nIn Gun_Recursive_Static value of is is %d",j);
		Gun_Recursive_Static();
	}
}

// Recursive function which uses auto variable
// This function runs infinitely due to the auto variables
/*
void Gun_Recursive_Auto()
{
	auto int k = 5;

	k--;

	if(k != 0)
	{
		printf("\nIn Gun_Recursive_Auto value of is is %d",k);
		Gun_Recursive_Auto();
	}
}
*/

int main()
{

// Calling function multiple time
Fun_Normal();
Fun_Normal();
Fun_Normal();

Gun_Recursive_Static();

// Gun_Recursive_Auto();

return 0;
}