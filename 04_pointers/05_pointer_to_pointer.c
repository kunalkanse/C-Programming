#include<stdio.h>

int main()
{
    int no = 10;
    
    int *ptr1 = &no;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;

    printf("\nno : %d\n",no);
    printf("&no : %d\n",&no);

    printf("*ptr1 : %d\n",*ptr1);
    printf("&ptr1 : %d\n",&ptr1);

    printf("\npointer holdiing address of other pointer : \n");
    
    printf("ptr5 : %d -> ",ptr5);
    printf("ptr4 : %d -> ",ptr4);
    printf("ptr3 : %d -> ",ptr3);
    printf("ptr2 : %d -> ",ptr2);
    printf("ptr1 : %d\n",ptr1);
    
    
    

    printf("\nDereferencing = ");
    printf("\n*****ptr5 : %d\n",*****ptr5);

    printf("****ptr4 : %d\n",****ptr4);
    printf("***ptr3 : %d\n",***ptr3);
    printf("**ptr2 : %d\n",**ptr2);
    printf("*ptr1 : %d\n",*ptr1);


    printf("\nsize of *ptr1 : %d\n",sizeof(*ptr1));
    printf("size of no : %d\n",sizeof(no));

    return 0;
}