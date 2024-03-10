// This program demonstates constant in c

#include<stdio.h>

void fun(int i)
{
	i++;
	printf("Value of i from function fun is %d\n",i);
}

void gun(const int i)
{
	// For this function we are passing non constant value but this
	// function considered it as a constant

	//i++;	// Error
}

int main()
{	
	// i is a constant integer initialised with value 10.
	const int i = 10;

	// In C++ it is not allowed to create ininitialised constant
	//const int j;

	int const j = 10; // is same as const int j = 10;

	// We can not change value of constant member
	// j++;		// Error

	// Passing constant value to the function
	fun(i);

	int x = 10;
	// Passing non constant value to the function
	gun(x);

	//--------------------------------------------------------------------------------
	// Scenario 1:
	const int a1 = 10;
	// p1 is a pointer which stores address of constant integer
	const int *p1 = &a1;
	p1++;		// Allowed
	//a1++;		// Not allowed
	//(*p1)++;	// Not allowed
	p1 = &i;	// Allowed

	//--------------------------------------------------------------------------------
	// Scenario 2:
	int a2 = 10;
	// p2 is a constant pointer which stores address of integer
	int *const p2 = &a2;
	//p2++;		// Not Allowed
	a2++;		// Allowed
	(*p2)++;	// Allowed
	//p2 = &x;	// Not Allowed

	//--------------------------------------------------------------------------------
	// Scenario 3:
	int a3 = 10;
	// p3 is a pointer which stores address of integer
	int * p3 = &a3;
	p3++;		// Allowed
	a3++;		// Allowed
	(*p3)++;	// Allowed
	p3 = &x;	// Allowed

	//--------------------------------------------------------------------------------
	// Scenario 4:
	const int a4 = 10;
	// p4 is a constant pointer which stores address of constant integer
	const int *const p4 = &a4;
	//p4++;		// Not Allowed
	//a4++;		// Not Allowed
	//(*p4)++;	// Not Allowed
	//p4 = &j;	// Not Allowed

	//--------------------------------------------------------------------------------

	// Change value of constant using non constant pointer
	const int y = 10;
	int *q = (int *)&y;
	printf("Value of constant before change is %d\n",y);
	(*q)++;
	printf("Value of constant before change is %d\n",y);

	return 0;
}
