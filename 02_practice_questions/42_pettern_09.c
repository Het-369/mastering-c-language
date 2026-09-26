#include <stdio.h>

/*
============================================================================
QUESTION:
Write a C program to print a Butterfly star pattern based on user input 'n'.

For n = 5, Expected Output:
*               * 
* *           * * 
* * *       * * * 
* * * *   * * * * 
* * * * * * * * * 
* * * *   * * * * 
* * *       * * * 
* *           * * 
*               *
============================================================================
*/

int main() {
    int n;

    // Get number of rows for the half-height from the user
    printf("Enter the value of n (half-height): ");
    scanf("%d", &n);

    // --- Part 1: Upper Half of Butterfly ---
    for (int i = 1; i <= n; i++) {
        // 1. Print left stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }

        // 2. Print middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }

        // 3. Print right stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    // --- Part 2: Lower Half of Butterfly ---
    for (int i = n - 1; i >= 1; i--) {
        // 1. Print left stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }

        // 2. Print middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }

        // 3. Print right stars
        for (int j = 1; j <= i; j++) {
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
Enter the value of n (half-height): 5
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 

*/