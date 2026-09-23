#include <stdio.h>

/*
============================================================================
QUESTION:
Write a C program to print an inverted full pyramid pattern of stars (*)
based on user input 'n'.

For n = 5, Expected Output:
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        *
============================================================================
*/

int main() {
    int n;

    // Get number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows (from n down to 1)
    for (int i = n; i >= 1; i--) {

        // Loop 1: Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf("  "); // Two spaces for visual alignment
        }

        // Loop 2: Print stars (2 * i - 1 stars per row)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}