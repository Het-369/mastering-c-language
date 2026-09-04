#include <stdio.h>

/*
============================================================================
QUESTION:
Write a C program to print the following inverted right-aligned 
number triangle pattern based on user input 'n':

For n = 5, Expected Output:
1 2 3 4 5 
  1 2 3 4 
    1 2 3 
      1 2 
        1
============================================================================
*/

int main() {
    int n;

    // Get number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Outer loop handles the number of rows (from n down to 1)
    for (int i = n; i >= 1; i--) {
        
        // Loop 1: Prints leading spaces to align the triangle to the right
        for (int j = 1; j <= n - i; j++) {
            printf("  "); // Two spaces for alignment with numbers
        }

        // Loop 2: Prints numbers starting from 1 up to current row value 'i'
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }

        // Move to the next line after completing the current row
        printf("\n");
    }

    return 0;
}
/*
===============================================================================
Output:
===============================================================================
Enter the number of rows: 5
1 2 3 4 5 
  1 2 3 4 
    1 2 3 
      1 2 
        1 

*/