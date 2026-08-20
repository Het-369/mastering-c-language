/*
===============================================================================
 PRACTICE QUESTION 29: COUNT DIGITS & SUM OF DIGITS OF A NUMBER
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes an integer 'N' from the user and calculates:
1. Total number of digits in N.
2. Sum of all digits in N.

CONSTRAINTS / RULES:
- If N is negative, convert it to positive for digit extraction.
- Special Case: If N = 0, digit count is 1 and sum is 0.
- Use a loop with `% 10` (to extract digit) and `/ 10` (to remove digit).

EXAMPLE:
Input: N = 1234  --> Output: Digits Count = 4, Sum of Digits = 10
Input: N = -502  --> Output: Digits Count = 3, Sum of Digits = 7
===============================================================================
*/

#include <stdio.h>

int main() {
    int n, originalNum;
    int digitCount = 0;
    int digitSum = 0;
    int remainder;

    // 1. Input prompt & Validation
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    originalNum = n; // Original value સાચવી રાખી

    // Handle negative numbers
    if (n < 0) {
        n = -n;
    }

    // Special case for 0
    if (n == 0) {
        digitCount = 1;
        digitSum = 0;
    } else {
        // 2. Logic: Loop to count digits and calculate sum
        while(n!=0){
            remainder=n%10;
            digitSum += remainder;
            n/=10;
            digitCount++;
        }
    }

    // 3. Print Results
    printf("Number: %d\n", originalNum);
    printf("Total Digits = %d\n", digitCount);
    printf("Sum of Digits = %d\n", digitSum);

    return 0;
}
/*
===============================================================================
Output:
===============================================================================
Enter an integer: -123
Number: -123
Total Digits = 3
Sum of Digits = 6

*/