#include <stdio.h>
#include<stdlib.h>  //we need to include this library

//malloc is used to dynamic memory allocation
//memory gets allocated on heap section

//thereotically malloc is used to allocate block of
//memory foe single element but , we can cerate contiguous
//memory as per our requirement

int main()
{
    int *ptr = NULL;    //pointer to point at the memory allocated by malloc
    int size = 0;

    printf("Enter how many elements : ");
    scanf("%d",&size);

    ptr = (int *) malloc(size * sizeof(int));  //malloc 

    if(ptr == NULL) //if memoty not allocated
    {
        printf("Memory Not Allocated");
    }

    //Allocated space contain garbage

    printf("Enter the Elements : \n");
    for(int i = 0; i < size ; i++)
    {
        scanf("%d",ptr+i);
    }

    printf("\ndata stored as : \n");
    for(int i = 0; i < size ; i++)
    {
        printf("%d\t",*(ptr+i));
    }    

    free(ptr);  //memoty deallocation

    return 0;
}
