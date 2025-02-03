/******************
Name: Neta Rosenzweig
ID: 323885582
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int x, p, h;
  printf("Please enter a number:\n");
  scanf("%d", &x);
  printf("Please enter a position:\n");
  scanf("%d", &p);
  // new number by shift right 'x' in 'p' position, '&1' to make sure that just this bit will change.
  h = x >> p & 1;
  printf("The bit in position %d of number %d is: %d\n", p, x, h);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number:\n");
  scanf("%d", &x);
  printf("Please enter a position:\n");
  scanf("%d", &p);
  // make mask by shift left the number '1' in 'p' position that make sure that this number at this position is '1' and the other bits are '0'.
  h = 1 << p;
  // turn on the bit and make sure that this bit will stay '1'.
  int on_x = x|h;
  // turn off the bit and make sure that only this bit will change to '0'.
  int off_x = x&~h;
  printf("Number with bit %d set to 1: %d \n", p, on_x);
  printf("Number with bit %d set to 0: %d \n", p, off_x);

  // Toggle bit
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("\nToggle bit:\n");
  printf("Please enter a number:\n");
  scanf("%d", &x);
  printf("Please enter a position:\n");
  scanf("%d", &p);
  // make mask that change 'p' to '1' and than chek: if it's '1'- the xor make it '0', and if it's '0'- the xor make it '1'.
  int new_x = x ^ (1 << p );//
  printf("Number with bit %d toggled: %d ", p, new_x);
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf("%d", &x);
  // chek if the number is even and change the last bit '1' to '0' and '0' to '1'.
  int fourth_x = (x & 1) ^ 1 ;
  printf("%d", fourth_x);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  printf ("Please enter the first number (octal):\n");
  scanf ("%o", &x);
  printf("Please enter the second number (octal):\n");
  scanf ("%o", &p);
  // make the sum of the two numbers.
  h = (x + p);
  printf("The sum in hexadecimal: %X\n", h);
  // chek the value of the bits 3, 5, 7, 11.
  int a = h >> 3 & 1;
  int b = h >> 5 & 1;
  int c = h >> 7 & 1;
  int d = h >> 11 & 1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n",a, b, c, d );






  printf("Bye!\n");
  
  return 0;
}
