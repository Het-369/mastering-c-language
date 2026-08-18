/*
===============================================================================
 PRACTICE QUESTION 16: PRINT 1 TO N NUMBERS
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes a positive integer 'N' from the user and prints 
all numbers from 1 to N using a 'for' loop.

CONSTRAINTS:
- Handle invalid input (if N <= 0, display an error message).
===============================================================================
*/

#include <stdio.h>

int main() {
    int n;

    // 1. Take input from user
    printf("Enter a positive integer N:\t ");
    scanf(" %d", &n);

    // 2. Input Validation
    if (n <= 0) {
        printf("Error: Please enter a number greater than 0.\n");
        return 1;
    }

    // 3. Logic: Write a 'for' loop to print numbers from 1 to N
    for(int i=1;i<=n;i++){
        printf("\n%d",i);
    }
    

    return 0;
}