
#include<stdio.h>

// void pointer is a pointer which can point to any type of variable

int main()
{
    int a = 10;
    int *ptr = &a;
    
    void *vptr = ptr;
    //printf("%d",*ptr);  //void pointer cannot be derefered directly

    printf("%d", *(int *)vptr);
    //we need to typecast first to dereference

    return 0;
}