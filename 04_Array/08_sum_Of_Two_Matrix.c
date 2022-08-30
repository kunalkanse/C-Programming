// C program to find the sum of two matrices of order 2*2

#include <stdio.h>
int main()
{
    int mat1[2][2], mat2[2][2], sum[2][2];

    //Taking input of elements in mat1
    printf("Enter Elemnts of first materix : \n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2 ; j++)
        {
            printf("Enter matrix1[%d][%d] : ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }

    //Taking input of elements in mat2
    printf("\nEnter Elemnts of second materix : \n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2 ; j++)
        {
            printf("Enter matrix2[%d][%d] : ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }

    // adding corresponding elements of two arrays and storing in sum[][]
    for(int i = 0; i < 2 ; i++)
    {
        for(int j = 0; j < 2 ; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    //displaying sum
    printf("\nsum of the matrix 1 and matrix 2 : \n");

    for(int i = 0; i < 2 ; i++)
    {
        for(int j = 0; j < 2 ; j++)
        {
            printf("mat1[%d][%d] + mat2[%d][%d] = %d\n",i+1,j+1,i+1,j+1,sum[i][j]);
        }
    }

    return 0;
}