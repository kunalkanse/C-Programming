#include <stdio.h>
int main()
{
   int* pc, c;
   
   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22
   
   pc = &c;
   printf("Address of c stored in pc: %p\n", pc);
   printf("Address of pointer pc: %p\n", &pc);
   printf("Content of pointer pc: %d\n", *pc); // 22
   printf("size of pointer pc: %d\n\n",sizeof(pc)); // 22
   
   c = 11;
   printf("Address of pointer pc: %p\n", &pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11
   
   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 2
   return 0;
}