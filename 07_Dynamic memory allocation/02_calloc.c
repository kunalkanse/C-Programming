#include <stdio.h>
#include<stdlib.h>



int main()
{
    int *ptr = NULL;
    int size = 0;

    printf("Enter how many elements : ");
    scanf("%d",&size);

    ptr = (int *) calloc(size,sizeof(int)); //calloc
    //calloc calculates the size and allocate calculated size 

    if(ptr == NULL)
    {
        printf("Memory Not Allocated");
    }

    //Allocated space initialized to 0


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