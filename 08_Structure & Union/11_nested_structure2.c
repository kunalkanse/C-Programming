#include <stdio.h>

struct hello
{
    int a;
    int b;

    struct demo //structure inside structure
    {
        int c;
        int d;
    } dobj;

}hobj;

int main()
{
    hobj.a = 10;
    hobj.b = 20;

    hobj.dobj.c = 30;
    hobj.dobj.d = 40;

    printf("hobj.dobj.c = %d\n", hobj.dobj.c);
    printf("hobj.dobj.d = %d\n", hobj.dobj.d);

    printf("hobj.a = %d\n", hobj.a);
    printf("hobj.b = %d\n", hobj.b);

    return 0;
}