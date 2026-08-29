#include <stdio.h>

int main() {
    int n;

    // 1. Input prompt & validation
    printf("Enter number of rows: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input!\n");
        return 1;
    }

    // 2. Pascal's Triangle Logic (0-indexed logic)
    for (int row = 0; row < n; row++) {
        
        // Loop 1: Print leading spaces for alignment
        for (int space = 0; space < n - row - 1; space++) {
            printf(" ");
        }

        // Loop 2: Calculate and print numbers in the row
        int val = 1; // First element of every row is always 1
        for (int col = 0; col <= row; col++) {
            printf("%d ", val);

            // Mathematical formula to derive next number in the same row
            val = val * (row - col) / (col + 1);
        }

        printf("\n"); // Move to next line
    }

    return 0;
}
/*
===============================================================================
Output:
===============================================================================
Enter number of rows: 5
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 

*/