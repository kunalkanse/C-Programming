#include<stdio.h>
#pragma pack(1)

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

    /*
        in 4_padding.c
        we got the output of size of structure as 16 byte
        but in this program we only get 10 bytes 

        this is becauze of #pragma pack() directive
        compiler gives memory to the variables on the interval of paramter in #pragema pack( __ ).
    */

   return 0;
}