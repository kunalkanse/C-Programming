#include<stdio.h>

//pointer is derived datatype in c & c++ , pointers is not applicable in java due to security purpose

//& operator is used to get address
//* operator used to fetch data from respective address

//size of pointer on 32 bit architechture is 4 byte
//but on 64 bit architechture its 8 byte

int main()
{
    int no = 10;
    int *ptr1 = &no;

    double d = 3.14;
    double *ptr2 = &d;

    printf("\nAddress of no : %d\n",&no);
    printf("Value inside ptr : %d\n",ptr1);

    printf("\nvalue inside no : %d\n",no);
    printf("fetching value of no using pointer as *p : %d\n",*ptr1);

    printf("\nsize of no : %d\n",sizeof(no));
    printf("size of pointer p : %d\n",sizeof(ptr1));
    printf("\nsize of d : %d\n",sizeof(d));
    printf("size of pointer ptr2 : %d\n",sizeof(ptr2));

    return 0;
}