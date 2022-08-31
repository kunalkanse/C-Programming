#include <stdio.h>
int main() {

  int x[5] = {1, 2, 3, 4, 5};

  // ptr is assigned the address of the third element
  int* ptr = &x[2]; 

  printf("*ptr = %d \n", *ptr);   // 3
  printf("*(ptr+1) = %d \n", *(ptr+1)); // 4
  printf("*(ptr-1) = %d", *(ptr-1));  // 2

  return 0;
}