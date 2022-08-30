
#include<stdio.h>

int main()
{
    // Different ways to initialize two-dimensional array

    int c[2][3] = {{1, 3, 0}, {-1, 5, 9}};
            
    int d[][3] = {{1, 3, 0}, {-1, 5, 9}};
                    
    int e[2][3] = {1, 3, 0, -1, 5, 9};

    printf("%d\n",c[1][1]);
    printf("%d\n",d[0][0]);
    printf("%d\n",c[1][2]);
}