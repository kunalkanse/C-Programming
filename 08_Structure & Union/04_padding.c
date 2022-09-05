#include<stdio.h>

struct pad
{
    char ch1;
    int int1;
    char ch2;
    float f1;
}obj;

int main()
{
    
    printf("size of structure : %d",sizeof(obj));

    //output is 16 , but how
    /*
        on 64 bit architechture
        char takes 1 byte
        int takes 4 bytes
        float takes 4 bytes

        so the size of structure should be 10 bytes
        but for the faster accessing & 
        in order to increase performance of code such compiler stores data in
        the format as the addresses are multiples of their respective sizes

        refer 4_padding_2.c to get solution to save memory 
    */
   
   return 0;
}