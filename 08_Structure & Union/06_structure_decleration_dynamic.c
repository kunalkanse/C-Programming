#include <stdio.h>
#include<stdlib.h>

struct demo
{
    int a;
    float b;
    char ch;
};

int main()
{
    struct demo *ptr = NULL;

    ptr = (struct demo *)malloc(sizeof(struct demo));

    ptr->a = 10;
    ptr->b = 3.14;
    ptr->ch = 'k';

    printf("Accessing Elements using -> operator (indirect accessing opearator)\n");
    printf("ptr->a : %d\n", ptr->a);
    printf("ptr->b : %f\n", ptr->b);
    printf("ptr->ch : %c\n", ptr->ch);

    return 0;
}