/*
===============================================================================
 PRACTICE QUESTION 8: ASCII VALUE FINDER
===============================================================================
PROBLEM STATEMENT:
Write a C program that prompts the user to enter a single character and 
prints its corresponding ASCII integer value.

KEY CONCEPTS COVERED:
- Format Specifiers (%c vs %d)
- Internal character representation in C
===============================================================================
*/

#include <stdio.h>

int main() {
    // 1. Variable Declaration
    char character;
    
    // 2. User Input (Character)
    printf("please enter a single character:\t");
    scanf(" %c",&character);

    // 3. Output Character and its ASCII Value (%d)
    printf("ASCII value of entered character is: %d",character);
    return 0;
}
/*
===============================================================================
Output:
===============================================================================
please enter a single character:        A
ASCII value of entered character is: 65
*/