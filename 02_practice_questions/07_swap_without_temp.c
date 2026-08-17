/*
===============================================================================
 PRACTICE QUESTION 7: SWAP TWO NUMBERS (WITHOUT 3RD VARIABLE)
===============================================================================
PROBLEM STATEMENT:
Write a C program to swap the values of two variables 'a' and 'b' WITHOUT 
using any third temporary variable. Use basic arithmetic operators (+ and -).

KEY CONCEPTS COVERED:
- Arithmetic Logic & Brainstorming
- Variable Mutation
===============================================================================
*/

#include <stdio.h>

int main() {
    // 1. Variable Declaration & Initialization
    int a,b;
    
    printf("enter a:\t");
    scanf(" %d",&a);

    printf("enter b:\t");
    scanf(" %d",&b);

    // 2. Display values BEFORE swapping
    printf("a is equals: %d",a);
    printf("\nb is equals: %d",b);

    // 3. Logic: Swapping using addition (+) and subtraction (-) only
    a=a+b;
    b=a-b;
    a=a-b;

    // 4. Display values AFTER swapping
    printf("\nafter swapping a is equals: %d",a);
    printf("\nafter swapping b is equals: %d",b);
    return 0;
}
/*
===============================================================================
Output:
===============================================================================
enter a:        5
enter b:        13
a is equals: 5
b is equals: 13
after swapping a is equals: 13
after swapping b is equals: 5
*/