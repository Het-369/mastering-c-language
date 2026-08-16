/*
  ===========================================================================
  PRACTICE QUESTION 1: SUM OF TWO NUMBERS (WITHOUT SCANF)
  ===========================================================================
  PROBLEM STATEMENT:
  Write a C program to calculate and display the sum of two pre-defined 
  integer variables.

  KEY CONCEPTS COVERED:
  - Variable Initialization
  - Arithmetic Addition (+)
  - Printing Formatted Output
  ===========================================================================
*/

#include <stdio.h>

int main() {
    // 1. Variable Declaration and Initialization
    int num1 = 15;
    int num2 = 25;
    int sum;

    // 2. Logic: Calculate Sum
    sum = num1 + num2;

    // 3. Output Result
    printf("--- RESULT ---\n");
    printf("First Number: %d\n", num1);
    printf("Second Number: %d\n", num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

/*
===========================================================================
EXPECTED OUTPUT:
===========================================================================
--- RESULT ---
First Number: 15
Second Number: 25
Sum of 15 and 25 is: 40
===========================================================================
*/