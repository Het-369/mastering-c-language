/*
===============================================================================
 TUTORIAL 07: CONSTANTS, BOOLEANS & BITWISE OPERATORS
===============================================================================
DESCRIPTION:
Demonstrating read-only variables using 'const', boolean data types via 
<stdbool.h>, and low-level bitwise operations in C.
===============================================================================
*/

#include <stdio.h>
#include <stdbool.h> // Required for bool, true, false

int main() {
    // -------------------------------------------------------------------------
    // 1. CONSTANTS (const Keyword)
    // -------------------------------------------------------------------------
    const float PI = 3.14159f;
    const int MAX_USERS = 100;
    
    // PI = 3.14; // ERROR: Cannot re-assign a value to a const variable!
    printf("--- CONSTANTS ---\n");
    printf("Value of PI: %.5f\n", PI);
    printf("Max Users allowed: %d\n\n", MAX_USERS);

    // -------------------------------------------------------------------------
    // 2. BOOLEANS (<stdbool.h>)
    // -------------------------------------------------------------------------
    bool isCProgramFun = true;
    bool isFishSkyAnimal = false;

    printf("--- BOOLEANS ---\n");
    printf("Is C Fun? %d (1 represents true)\n", isCProgramFun);
    printf("Is Fish a Sky Animal? %d (0 represents false)\n\n", isFishSkyAnimal);

    // -------------------------------------------------------------------------
    // 3. BITWISE OPERATORS
    // -------------------------------------------------------------------------
    // Binary: 5 -> 0101,  6 -> 0110
    int a = 5; 
    int b = 6;

    printf("--- BITWISE OPERATORS ---\n");
    printf("a = 5 (0101), b = 6 (0110)\n");
    printf("a & b  (Bitwise AND) : %d\n", a & b);  // 0101 & 0110 = 0100 (4)
    printf("a | b  (Bitwise OR)  : %d\n", a | b);  // 0101 | 0110 = 0111 (7)
    printf("a ^ b  (Bitwise XOR) : %d\n", a ^ b);  // 0101 ^ 0110 = 0011 (3)
    printf("~a     (Bitwise NOT) : %d\n", ~a);     // 2's complement of 5 = -6
    printf("a << 1 (Left Shift)  : %d\n", a << 1); // 0101 << 1   = 1010 (10)
    printf("a >> 1 (Right Shift) : %d\n", a >> 1); // 0101 >> 1   = 0010 (2)

    return 0;
}