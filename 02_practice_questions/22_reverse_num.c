/*
===============================================================================
 PRACTICE QUESTION 23: REVERSE A NUMBER (ALL POSSIBLE WAYS)
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes an integer 'N' from the user and reverses it.

CONSTRAINTS / RULES:
- Extract last digit: digit = num % 10
- Build reversed number: rev = rev * 10 + digit
- Remove last digit: num = num / 10
- Handle both positive and negative integers cleanly.

EXAMPLE:
Input: N = 1234
Output: Reversed Number = 4321
===============================================================================
*/

#include <stdio.h>

int main() {
    int num, originalNum, rev = 0, digit;

    // Input prompt
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input! Please enter a valid integer.\n");
        return 1;
    }

    originalNum = num; // Store original value for display

    printf("\n--- WAY 1: STANDARD WHILE LOOP (RUNNABLE CODE) ---\n");

    // Standard While Loop Logic (Handles positive and negative numbers)
    while (num != 0) {
        digit = num % 10;         // Extract the last digit
        rev = rev * 10 + digit;   // Append digit to reversed number
        num = num / 10;           // Remove the last digit
    }

    printf("Original Number : %d\n", originalNum);
    printf("Reversed Number : %d\n", rev);

    return 0;
}


/*
===============================================================================
 WAY 2: FOR LOOP APPROACH
===============================================================================
This approach eliminates the need to manually write num = num / 10 inside 
the loop body by moving it into the for-loop update expression.

#include <stdio.h>

int main() {
    int num, originalNum, rev = 0, digit;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) return 1;

    originalNum = num;

    printf("\n--- WAY 2: FOR LOOP APPROACH ---\n");
    for (; num != 0; num /= 10) {
        digit = num % 10;
        rev = rev * 10 + digit;
    }

    printf("Original Number : %d\n", originalNum);
    printf("Reversed Number : %d\n", rev);

    return 0;
}
*/


/*
===============================================================================
 WAY 3: DO-WHILE LOOP APPROACH
===============================================================================
Ensures that the loop body executes at least once. This is particularly 
useful if the user enters 0, ensuring the result is correctly returned as 0.

#include <stdio.h>

int main() {
    int num, originalNum, rev = 0, digit;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) return 1;

    originalNum = num;

    printf("\n--- WAY 3: DO-WHILE LOOP APPROACH ---\n");
    do {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    } while (num != 0);

    printf("Original Number : %d\n", originalNum);
    printf("Reversed Number : %d\n", rev);

    return 0;
}
*/


/*
===============================================================================
 WAY 4: RECURSIVE APPROACH (ADVANCED)
===============================================================================
Uses a recursive function to build the reversed number without any explicit loops.

#include <stdio.h>

int reverseRecursive(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverseRecursive(num / 10, rev * 10 + (num % 10));
}

int main() {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) return 1;

    printf("\n--- WAY 4: RECURSIVE APPROACH ---\n");
    int reversed = reverseRecursive(num, 0);

    printf("Original Number : %d\n", num);
    printf("Reversed Number : %d\n", reversed);

    return 0;
}
*/