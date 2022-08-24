#include<stdio.h>

/*

register Storage Class :-

Memory location:    CPU registers (if request granted)
Scope :	local (Inside the block only)
Lifetime :  (through out the function)
Linkage :	No linkage
Default Value :	Garbage
*/

/*
The register storage class specifier indicates to the compiler that the object should be stored in a machine register.
The register storage class specifier is typically specified for heavily used variables, such as a loop control variable
in the hopes of enhancing performance by minimizing access time.
If the compiler does not allocate a machine register for a register object, the object is treated as having the storage class specifier auto.
*/

// Register storage class is a request.
// If the registers are available ten our request is accepted.

// We can not declare register storage class variables in global scope

void fun()
{
    register int i = 10;

    // Any variable stored in CPU register or not is depend on capacity of microprocessor.
    // If the microprocessor has 16-bit register then they cannot hold a float value or a double value,
    // which require 4 and 8 bytes respectively.
}

void gun()
{
	// This is the better use of register storage class

	register int i;
	for(i=10; i>=0; --i)
	{
		printf("%d ",i);
	}

}

int main()
{
    fun();
    gun();

    return 0;
}