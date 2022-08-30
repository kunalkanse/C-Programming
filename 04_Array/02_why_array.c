
#include<stdio.h>

// to store marks of students

int main()
{

    int marks1=20 , marks2 = 19, marks3 = 17, marks4 = 18, marks5 = 16; 
    printf("\ndeclared variable for each student to store its marks\n");

    /* creating variables for every student, but if there are 200 students,
     then it is not feasible to create 200 variables
    */

   /* to overcome this problem create array , In array we can store multiple students
    marks under single name just specify the size
   */

    int marks[5] = {20,19,17,18,16};  
    printf("Array created to store marks\n");
    
    return 0;
}