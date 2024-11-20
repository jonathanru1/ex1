/******************
Name: Yehonatan Rubin
ID: 217433549
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

    // What bit
    //first we need to scan the number and the position than i"m going to move the number to the 0 position and use & to turn off all the other bits
    printf("What bit:\n");
    /*Scan two integers (representing number and a position)
    Print the bit in this position. */
    int number, positin;
    printf("Please enter a number: \n");
    scanf("%d", &number);
    printf("Please enter a position: \n");
    scanf("%d", &positin);
    int modifiedNumber ;
    modifiedNumber = number >> positin ;
    modifiedNumber = modifiedNumber &  1;
    printf("The bit in position %d of number %d is: %d\n", positin, number, modifiedNumber);

    // Set bit
    //first im going to scan the number and the position , use a mask which the number 1 is in the same position of the bit and use the mask with or to turn the number on
    ////we will use ~ to change and the mask in order to turn the bit off
    printf("\nSet bit:\n");
    /*Scan two integers (representing number and a position)
    Make sure the bit in this position is "on" (equal to 1)
    Print the output
    Now make sure it's "off" (equal to 0)
    Print the output */
    int position, mask;
    printf("Please enter a number: \n");
    scanf("%d", &number);
    printf("Please enter a position: \n");
    scanf("%d", &position);
    mask = 1 << position;
    int bitOn = mask | number;
    printf("Number with bit %d set to 1: %d\n", position , bitOn);
    mask = ~(1 << position);
    printf("Number with bit %d set to 0: %d\n", position , (bitOn & mask));

    // Toggle bit
    //
    printf("\nToggle bit:\n");
    /*Scan two integers (representing number and a position)
    Toggle the bit in this position
    Print the new number */
    printf("Please enter a number: \n");
    scanf("%d", &number);
    printf("Please enter a position: \n");
    scanf("%d", &position);
    mask= ~mask ;
    mask = 1 << position;
    int ToggleBit = mask ^ number;
    printf("Number with bit %d toggled: %d\n", position, ToggleBit);

    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan an integer
    If the number is even - print 1, else - print 0. */
    printf("Please enter a number: \n");
    scanf("%d", &number);
    int evenOrOdd;
    int newMask = 1;
    evenOrOdd = (number & newMask)^1;
    printf("%d\n", evenOrOdd);

    // 3, 5, 7, 11
    printf("please enter the first number (0ctal)");
    printf("please enter the second number (octal)");
    printf("\n3, 5, 7, 11:\n");
    /* Scan two integers in octal base
    sum them up and print the result in hexadecimal base
    Print only 4 bits, in positions: 3,5,7,11 in the result. */
    int number1, number2;
    printf("Please enter the first number (octal):\n");
    scanf("%o", &number1);
    printf("Please enter the second number (octal): \n");
    scanf("%o", &number2);
    printf("The sum in hexadecimal:%X\n" ,number1 + number2);
   int sum = number1+number2;
   int BitThree,BitFive,BitSeven,BitEleven;
   BitThree=(sum>>3)&1;
   BitFive= (sum>>5)&1;
   BitSeven= (sum>>7)&1;
   BitEleven= (sum>>11)&1;
printf("The 3,5,7,11 bits are: %d%d%d%d\n", BitThree, BitFive , BitSeven, BitEleven);
    printf("Bye!\n");
    return 0;
}