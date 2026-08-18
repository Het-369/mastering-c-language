/*
===============================================================================
 PRACTICE QUESTION 12: EVEN OR ODD USING BITWISE AND (&)
===============================================================================
PROBLEM STATEMENT:
Write a C program using the Bitwise AND (&) operator to check if a number is 
Even or Odd (Without using the modulus % operator).

KEY CONCEPTS COVERED:
- Bitwise AND (&) operator
- Binary representation of Even/Odd numbers
- Boolean evaluation in C
===============================================================================
HINT:
- Any EVEN number in binary ends with 0 (e.g., 4 = 0100, 6 = 0110).
- Any ODD number in binary ends with 1 (e.g., 5 = 0101, 7 = 0111).
- What happens when you perform (num & 1)?
===============================================================================
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    // 1. Variable Declaration
    int num;
    bool isOdd;

    // 2. User Input
    printf("Enter an integer number:\t");
    scanf(" %d", &num);

    // 3. Logic: Check Even/Odd using Bitwise AND (&)
    isOdd=num&1;

    // 4. Output Result
    isOdd==1?printf("given number is ODD"):printf("given number is EVEN");

    return 0;
}
/*
===============================================================================
Output:
===============================================================================
Enter an integer number:        5
given number is ODD

Enter an integer number:        4
given number is EVEN
*/