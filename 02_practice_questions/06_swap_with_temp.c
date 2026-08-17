/*
===============================================================================
 PRACTICE QUESTION 6: SWAP TWO NUMBERS (USING 3RD VARIABLE)
===============================================================================
PROBLEM STATEMENT:
Write a C program to swap the values of two variables 'a' and 'b' using 
a third temporary variable ('temp').

KEY CONCEPTS COVERED:
- Variable Assignment
- Memory swapping logic
===============================================================================
*/

#include <stdio.h>

int main() {
    // 1. Variable Declaration & Initialization
    int a,b;
    printf("enter the value of a(any integer num):\t");
    scanf(" %d",&a);

    printf("\nenter the value of b(any integer num):\t");
    scanf(" %d",&b);

    // 2. Display values BEFORE swapping
    printf("\ncurrent value of a: %d\n\n",a);
    printf("current value of b: %d\n\n",b);

    // 3. Logic: Swapping using temp variable
    int temp=a;
    a=b;
    b=temp;
    
    // 4. Display values AFTER swapping
    
    printf("value of 'a' after swapping: %d\n\n",a);
    printf("value of 'b' after swapping: %d\n\n",b);

    return 0;
}
/*
===============================================================================
Output:
===============================================================================
enter the value of a(any integer num):  5

enter the value of b(any integer num):  10

current value of a: 5

current value of b: 10

value of 'a' after swapping: 10

value of 'b' after swapping: 5

*/