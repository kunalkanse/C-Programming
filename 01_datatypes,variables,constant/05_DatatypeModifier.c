
/* Datatype mofifier
    To modify size : 
            (1)Short 
            (2)long

    To modify range : 
            (1)signed
            (2)unsigned
*/    

#include<stdio.h>

int main()
{
    int i = 2147483647;        //4 bytes -> usable 31 bits
    short int j = 32767;       //2  bytes 
    long long int k = 9223372036854775807;  //8 bytes
    
    unsigned int m = 4294967295;    //4 bytes -> usable 32 bits


    printf("int = %d\n",i);
    printf("short int = %hd\n",j);
    printf("long long int = %lld\n",k);


    printf("unsigned int = %u\n",m);

    return 0;
}