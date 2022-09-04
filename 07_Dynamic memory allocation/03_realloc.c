#include <stdio.h>
#include<stdlib.h>



int main()
{
    int *ptr = NULL;
    int *q = NULL;

    ptr = (int *) malloc(40); //malloc

    if(ptr == NULL)
    {
        printf("Memory Not Allocated");
    }

    // Increasing the allocated memory by 20 bytes using realloc
	ptr = (int *)realloc(ptr, 60);
	if (ptr == NULL)
	{
		printf("Unable to allocate the memory\n");
		return 0;
	}

	// Decreasing the alocated memory by 30 bytes using realloc
	ptr = (int *)realloc(ptr, 30);
	if (ptr == NULL)
	{
		printf("Unable to allocate the memory\n");
		return 0;
	}

    // Allocate the memory by using realloc by passing first parameter as NULL
	q = (int *)realloc(NULL, 40);
	if (q == NULL)
	{
		printf("Unable to allocate the memory\n");
		return 0;
	}

    // Free the memory by using realloc
	realloc(q, 0);
	if (q == NULL)
	{
		printf("Unable to allocate the memory\n");
		return 0;
	}

    return 0;
}