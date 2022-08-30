#include<stdio.h>

// to store elements in array we have to iterate the array,
// to iterate through array we can use loops

int main()
{
    int size = 0;

    printf("Enter number of students of class : ");
    scanf("%d",&size);

    int marks[size];

    printf("Enter the marks of student : \n\n");

    //storing elemnts in array
    for(int i = 0; i < size ; i++)
    {
        printf("Student %d : ",i+1);
        scanf("%d",&marks[i]);
    }

    //accessing elements in array
    printf("\nMarks of students : \n\n");

     for(int i = 0; i < size ; i++)
    {
        printf("marks of Student %d is : %d",i+1 , marks[i]);
        printf("\n");
    }

    return 0;
}