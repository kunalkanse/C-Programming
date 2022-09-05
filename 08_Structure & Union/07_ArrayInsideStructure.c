#include<stdio.h>

struct demo
{
    int a;
    int arr[4];
    float f;
};

int main()
{
   struct demo dobj;

   dobj.a = 10;

   dobj.arr[0] = 20;
   dobj.arr[1] = 20;
   dobj.arr[2] = 20;
   dobj.arr[3] = 20;

   dobj.f = 3.14;

   printf("size of structure demo : %d",sizeof(dobj));
   
   return 0;
}