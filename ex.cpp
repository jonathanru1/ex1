/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  int number, positin;
  printf("please enter a number\n");
  printf("please enter a position");
  scanf("%d%d" ,&number , &positin);
  int z ;
 z= number >> positin ;
 int y=1 ;
 z=z & y ;
  printf("%d\n", z);

  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int position, mask;
  printf("please enter a number\n");
  printf("please enter a position\n");
  scanf("%d%d" ,&number , &position);
    mask = 1 << position;
 int bitOn = mask | number;
 printf("the number when the bit is on is : %d\n" , bitOn);
 // int mask = ;
 // int closingBit =mask << position;
 // int finalNum=closingBit&&number;
    mask = ~(1 << position);
 printf("the number when the bit is off is : %d\n" , (bitOn & mask));

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
//we already did int for number,position and the mask we need , so we just need to adjust the mask,and print.
  // Toggle bit
    printf("please enter a number\n");
  printf("please enter a position\n");
  scanf("%d%d" ,&number , &position);
  mask= ~mask ;
  mask = 1 << position;
  int ToggleBit = mask ^ number;
  printf("The number when the bit is on is:%d\n", ToggleBit);

  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */

  // Even - Odd
  printf("please enter a number\n");
  scanf("%d", &number);
  int evenOrodd;
  int newMAsk = 1;
  evenOrodd = (number & newMAsk);
  printf("%d", evenOrodd);


  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

  // 3,
  // 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");

  return 0;
}
