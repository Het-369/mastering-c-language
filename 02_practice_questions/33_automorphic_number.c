/*
===============================================================================
 PRACTICE QUESTION 35: CHECK AUTOMORPHIC NUMBER
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes a positive integer 'N' and checks whether it is 
an Automorphic Number (a number whose square ends in the same digits as the number itself).

EXAMPLE:
Input: N = 25  --> Square = 625  --> Output: 25 is an Automorphic Number.
Input: N = 7   --> Square = 49   --> Output: 7 is NOT an Automorphic Number.
===============================================================================
*/

#include <stdio.h>

int main() {
    int n, temp;
    long long sq;
    int isAutomorphic = 1; // Flag variable: 1 = true, 0 = false

    // 1. Input prompt & validation
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input!\n");
        return 1;
    }

    sq = (long long)n * n; // Square of N
    temp = n;

    // 2. Logic: Compare digits of N and Square from right to left
    while (temp > 0) {
        // If last digits don't match, it's not Automorphic
        if (temp % 10 != sq % 10) {
            isAutomorphic = 0;
            break;
        }
        temp /= 10; // Remove last digit of N
        sq /= 10;   // Remove last digit of Square
    }

    // 3. Print Result
    if (isAutomorphic) {
        printf("%d is an Automorphic Number.\n", n);
    } else {
        printf("%d is NOT an Automorphic Number.\n", n);
    }

    return 0;
}
/*
===============================================================================
Output:
===============================================================================
Enter a positive integer: 25
25 is an Automorphic Number.

*/
