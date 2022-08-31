#include <stdio.h>
int main()
{
    int *ip = NULL;
    char *cp = NULL;
    float *fp = NULL;
    double *dp = NULL;

    printf("pointer to integer take : %d byte\n", sizeof(ip));
    printf("pointer to character take : %d byte\n", sizeof(cp));
    printf("pointer to float take : %d byte\n", sizeof(fp));
    printf("pointer to double take : %d byte\n", sizeof(dp));

    // irrespective of pointer type , each pointer takes 4 byte
    // pointer size varies depend on the architechture
    return 0;
}
