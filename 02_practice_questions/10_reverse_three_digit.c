/*
===============================================================================
 PRACTICE QUESTION 10: REVERSE A 3-DIGIT NUMBER & SUM OF DIGITS
===============================================================================
PROBLEM STATEMENT:
Write a C program that accepts a 3-digit integer from the user (e.g., 345), 
extracts its individual digits using % and /, calculates the sum of digits, 
and displays the reversed number (e.g., 543).

KEY CONCEPTS COVERED:
- Modulus Operator (%) for extracting digits
- Division Operator (/) for reducing numbers
===============================================================================
*/

#include <stdio.h>

int main() {
    // 1. Variable Declaration
    int num;
    int firstDigit, secondDigit, thirdDigit;
    int sumOfDigits, reversedNum;

    // 2. User Input (3-digit integer)
    printf("Enter a 3-digit integer number:\t");
    scanf("%d", &num);

    // 3. Logic: Extract units, tens, and hundreds place digits
    thirdDigit = num % 10;          // e.g., 345 % 10 = 5
    secondDigit = (num / 10) % 10;   // e.g., (345 / 10) % 10 = 34 % 10 = 4
    firstDigit = num / 100;         // e.g., 345 / 100 = 3

    // Mathematical Calculation
    sumOfDigits = firstDigit + secondDigit + thirdDigit;
    reversedNum = (thirdDigit * 100) + (secondDigit * 10) + firstDigit;

    // 4. Output: Sum of Digits & Reversed Number
    printf("\nSum of digits:\t\t%d", sumOfDigits);
    printf("\nReversed number:\t%d\n", reversedNum);

    return 0;
}

/*
===============================================================================
Output:
===============================================================================
Enter a 3-digit integer number: 345

Sum of digits:          12
Reversed number:        543
===============================================================================
*/