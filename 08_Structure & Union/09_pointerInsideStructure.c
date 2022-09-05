#include<stdio.h>

struct demo
{
    int int1;
    int *ptr;   //pointer iside structure
    char ch1;
};

int main()
{
    int i = 11;
    struct demo dobj;

    dobj.int1 = 10;

    dobj.ch1 = 'k';

    dobj.ptr = &i;

    printf("*(demo.ptr) = %d",*(dobj.ptr));

   return 0;
}