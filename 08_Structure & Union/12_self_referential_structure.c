#include<stdio.h>

struct self_refer
{
    int no;
    struct self_refer * self;
};

int main()
{
    struct self_refer obj1;
    struct self_refer obj2;
    struct self_refer obj3;

    obj1.no = 10;
    obj2.no = 20;
    obj3.no = 30;

    struct self_refer * ptr = &obj1;
    
    obj1.self = &obj2;
    obj2.self = &obj3;
    obj3.self = NULL;

    printf("\nptr | %d | --> ",ptr);
   
   printf("obj1| %d | %d | --> ", obj1.no,ptr->self);
   printf("obj2| %d | %d | --> ", obj2.no,ptr->self->self);
   printf("obj3| %d | %d |", obj3.no,ptr->self->self->self);

   return 0;
}