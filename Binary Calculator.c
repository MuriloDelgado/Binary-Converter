#include <stdio.h>
#include <windows.h>

int main()
{
    // Declaring Variables
    int binaryIn; // Input
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0; // Individual numbers
    int decimalNum; // Converted decimal form

    // Intro
    printf("This is the binary number converter");
    Sleep(2000);
    printf("\nIn this program, you will input a binary number of 5 or less digits,\nthen the calculator will convert it into a decimal");
    Sleep(3000);

    // Scanning the input
    printf("\nShall we begin? First, input the binary number you wish to convert: ");
    scanf("%d", &binaryIn);

    while (binaryIn != -1) // Repeat loop
    {
    // Finding out which are 1s or 0s
    num1 = (binaryIn / 1) % 10;
    num2 = (binaryIn / 10) % 10;
    num3 = (binaryIn / 100) % 10;
    num4 = (binaryIn / 1000) % 10;
    num5 = (binaryIn / 10000) % 10;

    // Converting 1s and 0s
    if (num1 == 1)
    {
        num1 *= 1; // Finding first number
    }
    if (num2 == 1)
    {
        num2 *= 2; // Finding second number
    }
    if (num3 == 1)
    {
        num3 *= 4; // Finding third number
    }
    if (num4 == 1)
    {
        num4 *= 8; // Finding fourth number
    }
    if (num5 == 1)
    {
        num5 *= 16; // Finding firth number
    }

    // Adding numbers to find decimal equivalent
    decimalNum = num1 + num2 + num3 + num4 + num5;

    // Printing result
    printf("\n%d in binary is %d in decimal", binaryIn, decimalNum);

    // Restart loop
    printf("\nEnter another binary number or -1 to end: ");
    scanf("%d", &binaryIn);
    }
}
