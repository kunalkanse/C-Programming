#include<stdio.h>

/*
array is a derived datatype 
Array is linear data sturcture which holds homogeneous elements in a sequantial format
*/

int main()
{
    
    //array initialisation
        // 1) by member by member method

        int arr[5];     //definition

        arr[0] = 10;    
        arr[1] = 20;
        arr[2] = 30;
        arr[3] = 40;
        arr[4] = 50;

        // 2)initialisation list method
        int brr[5] = {10,20,30,40,50}; 
        float crr[5] = {10.2,45.5,21.3,98.2,65.7};
        char drr[5] = {'a','b','c','d','e'};
        double err[5] = {10.278445,45.55445,21.3223,98.2798,65.78745};


        for(int i = 0; i < 5;i++)
        {
            printf("%f\n",err[i]);
        }

    return 0;
}
