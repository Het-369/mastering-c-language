#include <stdio.h>

/*
============================================================================
QUESTION:
Write a C program to print a Hollow Diamond pattern of stars (*) 
based on user input 'n' (rows for the upper half).

For n = 5, Expected Output:
        * 
      *   * 
    *       * 
  *           * 
*               * 
  *           * 
    *       * 
      *   * 
        *
============================================================================
*/

int main() {
    int n;

    // Get number of rows for the upper half from the user
    printf("Enter the number of rows for top half: ");
    scanf("%d", &n);

    // --- Part 1: Upper Half of Hollow Diamond ---
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        
        // Print stars and inner spaces
        for (int k = 1; k <= (2 * i - 1); k++) {
            // Print star only at the first position (k == 1) or last position (k == 2 * i - 1)
            if (k == 1 || k == (2 * i - 1)) {
                printf("* ");
            } else {
                printf("  "); // Inner empty space
            }
        }
        printf("\n");
    }

    // --- Part 2: Lower Half of Hollow Diamond ---
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        
        // Print stars and inner spaces
        for (int k = 1; k <= (2 * i - 1); k++) {
            // Print star only at the first or last position of the row
            if (k == 1 || k == (2 * i - 1)) {
                printf("* ");
            } else {
                printf("  "); // Inner empty space
            }
        }
        printf("\n");
    }

    return 0;
}
/*
===============================================================================
Output:
===============================================================================
Enter the number of rows for top half: 5
        * 
      *   * 
    *       * 
  *           * 
*               * 
  *           * 
    *       * 
      *   * 
        * 

*/