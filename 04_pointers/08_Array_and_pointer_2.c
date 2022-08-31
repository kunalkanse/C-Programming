#include <stdio.h>
int main() {

  int i, x[6], sum = 0;

  printf("Enter 6 numbers: ");

  for(i = 0; i < 6; ++i) 
  {

    // Equivalent to scanf("%d", &x[i]);
        scanf("%d", x+i);



    // sum += *(x+i); is Equivalent to sum += x[i]
        sum += *(x+i);
        
        //*(x + i)  let i = 2
        //*(x + (2 * sizeof(datatype)));
        //*(x + (2 * sizeof(int)));
        //*(x + (2 * 4));
        //*(x + 8);
        //*(168510 + 8);
        //*(168618);
        //value at address of 168518 is ___ . 

        // sum = sum + (value at 168518)

  }

  printf("Sum = %d", sum);

  return 0;
}