/*
===============================================================================
 PRACTICE QUESTION 28: GCD AND LCM USING 3 DIFFERENT METHODS
===============================================================================
*/

#include <stdio.h>

int main() {
    int num1, num2;

    // Input prompt with validation
    printf("Enter two positive integers (A and B): ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 <= 0 || num2 <= 0) {
        printf("Invalid input! Please enter positive integers (> 0).\n");
        return 1;
    }

    printf("\n--- Input Values: A = %d, B = %d ---\n\n", num1, num2);

    // =========================================================================
    // METHOD 1: Euclidean Algorithm (Modulo / Remainder Method) - FASTEST & BEST
    // =========================================================================
    int a1 = num1, b1 = num2;
    while (b1 != 0) {
        int temp = b1;
        b1 = a1 % b1; // Remainder gets stored in b1
        a1 = temp;    // Previous b1 gets stored in a1
    }
    int gcd1 = a1;
    int lcm1 = (num1 * num2) / gcd1;

    printf("[Method 1 - Euclidean Modulo]  --> GCD = %d, LCM = %d\n", gcd1, lcm1);
/*
    // =========================================================================
    // METHOD 2: Subtraction Method (Euclid's Original Algorithm)
    // =========================================================================
    int a2 = num1, b2 = num2;
    while (a2 != b2) {
        if (a2 > b2) {
            a2 = a2 - b2; // Subtract smaller from larger
        } else {
            b2 = b2 - a2;
        }
    }
    int gcd2 = a2; // When a2 == b2, that value is the GCD
    int lcm2 = (num1 * num2) / gcd2;

    printf("[Method 2 - Subtraction]       --> GCD = %d, LCM = %d\n", gcd2, lcm2);

    // =========================================================================
    // METHOD 3: Basic For Loop (Brute-Force Method)
    // =========================================================================
    int gcd3 = 1;
    int min = (num1 < num2) ? num1 : num2; // Find the smaller number

    for (int i = 1; i <= min; i++) {
        // Check if 'i' divides both numbers completely
        if (num1 % i == 0 && num2 % i == 0) {
            gcd3 = i; // Keep updating to find the largest common divisor
        }
    }
    int lcm3 = (num1 * num2) / gcd3;

    printf("[Method 3 - Basic For Loop]    --> GCD = %d, LCM = %d\n", gcd3, lcm3);
*/
    return 0;
}
/*
===============================================================================
Output:
===============================================================================
Enter two positive integers (A and B): 12
18

--- Input Values: A = 12, B = 18 ---

[Method 1 - Euclidean Modulo]  --> GCD = 6, LCM = 36

*/