#include <stdio.h>

struct demo
{
    int a;
    float b;
    char ch;
}dobj = {10,3.14,'k'};

int main()
{
    struct demo *ptr = &dobj;

    printf("ptr->a : %d\n", ptr->a);      //indirect member accessing 

    printf("ptr->b : %f\n", (*ptr).b);      //direct member accessing 
    
    printf("ptr->ch : %c\n", ptr->ch);

    return 0;
}