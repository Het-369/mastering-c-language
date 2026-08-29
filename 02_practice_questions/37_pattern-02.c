/*
===============================================================================
 PRACTICE QUESTION 37: FULL PYRAMID & DIAMOND STAR PATTERN
===============================================================================
PROBLEM STATEMENT:
Write a C program that prints:
1. Full Pyramid Star Pattern
2. Diamond Star Pattern
===============================================================================
*/

#include <stdio.h>

int main() {
    int n, row, space, star;

    // 1. Input prompt & validation
    printf("Enter number of rows: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("\n--- 1. Full Pyramid Pattern ---\n");
    // Outer loop: Row controller (1 to N)
    for (row = 1; row <= n; row++) {
        
        // Inner loop 1: Print leading spaces (N - row)
        for (space = 1; space <= n - row; space++) {
            printf(" ");
        }

        // Inner loop 2: Print stars with space (* )
        for (star = 1; star <= row; star++) {
            printf("* ");
        }

        printf("\n"); // Move to next line after each row
    }

    printf("\n--- 2. Diamond Pattern ---\n");
    // Top Half (Pyramid)
    for (row = 1; row <= n; row++) {
        for (space = 1; space <= n - row; space++) {
            printf(" ");
        }
        for (star = 1; star <= row; star++) {
            printf("* ");
        }
        printf("\n");
    }

    // Bottom Half (Inverted Pyramid)
    for (row = n - 1; row >= 1; row--) {
        // Print spaces (Increases as row decreases)
        for (space = 1; space <= n - row; space++) {
            printf(" ");
        }
        // Print stars (Decreases as row decreases)
        for (star = 1; star <= row; star++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
/*
===============================================================================
Output:
===============================================================================
Enter number of rows: 5

--- 1. Full Pyramid Pattern ---
    * 
   * * 
  * * * 
 * * * * 
* * * * * 

--- 2. Diamond Pattern ---
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/