#include<stdio.h>

struct demo
{
    int a;
    int b; 
};

struct hello
{
    int c;
    int d;
    struct demo dobj;   //defining structure and structure
};

int main()
{
    struct hello hobj;

    hobj.c = 10;
    hobj.d = 20;

    hobj.dobj.a = 30;
    hobj.dobj.b = 40;

    printf("hobj.dobj.a = %d\n",hobj.dobj.a);
    printf("hobj.dobj.b = %d\n",hobj.dobj.b);

    printf("hobj.c = %d\n",hobj.c);
    printf("hobj.d = %d\n",hobj.d);

   return 0;
}