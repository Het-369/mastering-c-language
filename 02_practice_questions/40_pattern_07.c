#include <stdio.h>

/*
============================================================================
QUESTION:
Write a C program to print a Diamond pattern of stars (*) 
based on user input 'n' (rows for the upper half).

For n = 5, Expected Output:
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        *
============================================================================
*/

int main() {
    int n;

    // Get number of rows for the upper half from the user
    printf("Enter the number of rows for top half: ");
    scanf("%d", &n);

    // --- Part 1: Upper Pyramid ---
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }
        printf("\n");
    }

    // --- Part 2: Lower Inverted Pyramid ---
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
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
Enter the number of rows for top half: 5
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 

*/