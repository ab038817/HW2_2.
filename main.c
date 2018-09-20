#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable declaration and assignment
  int a,b, temp;
    a = 15;
   b = 99;
   printf("Values before swapping \n a = %d, b = %d \n", a, b);
   //  Variable declaration and initialization

 temp  = a;
   a  = b;
   b  = temp;
    printf("Values after swapping \n a = %d, b = %d \n", a, b);
    return 0;
}
