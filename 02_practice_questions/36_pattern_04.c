/*
===============================================================================
 PRACTICE QUESTION 39: FLOYD'S TRIANGLE
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes 'N' (number of rows) and prints Floyd's Triangle.

EXAMPLE (N = 4):
1
2 3
4 5 6
7 8 9 10
===============================================================================
*/

#include <stdio.h>

int main() {
    int n, count = 1;

    // 1. Input prompt & validation (n > 0)
    printf("Enter number of rows: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input!\n");
        return 1;
    }

    // 2. Logic for Floyd's Triangle
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d ", count);
            count++; // Increment count after printing
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
/*
===============================================================================
Output:
===============================================================================
Enter number of rows: 4
1 
2 3 
4 5 6 
7 8 9 10 

*/