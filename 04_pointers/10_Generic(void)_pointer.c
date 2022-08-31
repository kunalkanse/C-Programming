#include <stdio.h>

// Generic pointer (void pointer) is a pointer which can points to any type of data
// to dereference the generic pointer (void pointer) we need to eplicitly typecast it

int main()
{
    int no = 10;
    double d = 3.14;

    int *ip = &no;   //static pointer
    double *dp = &d; //static pointer

    void *vp = NULL;
    //initialise void pointer to null to avoid runtime accidents (segmentation fault).
    //internally preprocessor replace NULL by (void *) 0 ,
    //inside stdio.h it is defined as #define NULL (void *) 0

    printf("Static pointers : \n");

    printf("*ip = %d\n", *ip);
    printf("*dp = %lf\n\n", *dp);

    printf("Genetic pointers : \n");

    vp = &no;                                //Generic pointer
    printf("*(int *)vp = %d\n", *(int *)vp); //typecasting

    vp = &d;                                        //Generic pointer
    printf("*(double *)vp = %lf\n", *(double *)vp); //typecasting
}