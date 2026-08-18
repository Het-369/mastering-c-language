/*
===============================================================================
 PRACTICE QUESTION 19: LARGEST OF THREE NUMBERS (ALL 7 POSSIBILITIES & 4 WAYS)
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes three integers (a, b, c) from the user and determines 
the largest among them while handling ALL 7 possible cases:
1. All three are equal (a == b == c)
2. a and b are equal & largest (a == b > c)
3. b and c are equal & largest (b == c > a)
4. a and c are equal & largest (a == c > b)
5. a is strictly largest (a > b && a > c)
6. b is strictly largest (b > a && b > c)
7. c is strictly largest (c > a && c > b)
===============================================================================
*/

#include <stdio.h>

int main() {
    int a, b, c;

    // Input prompt
    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\n--- WAY 1: CHAINED TERNARY OPERATOR (RUNNABLE CODE) ---\n");

    /*
     * Chained Ternary Operator Format:
     * (condition1) ? expression1 
     * : (condition2) ? expression2 
     * : default_expression;
     */
    (a == b && b == c) 
        ? printf("All three numbers are equal to %d\n", a)
    : (a == b && a > c) 
        ? printf("a and b are equal (%d) and both are the largest (greater than c: %d)\n", a, c)
    : (b == c && b > a) 
        ? printf("b and c are equal (%d) and both are the largest (greater than a: %d)\n", b, a)
    : (a == c && a > b) 
        ? printf("a and c are equal (%d) and both are the largest (greater than b: %d)\n", a, b)
    : (a > b && a > c) 
        ? printf("a (%d) is the largest\n", a)
    : (b > a && b > c) 
        ? printf("b (%d) is the largest\n", b)
        : printf("c (%d) is the largest\n", c);

    return 0;
}


/*
===============================================================================
 WAY 2: PURE NESTED IF-ELSE (NO LOGICAL OPERATORS: &&, ||)
===============================================================================
This approach uses strictly nested if-else statements without using && or ||.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\n--- WAY 2: PURE NESTED IF-ELSE ---\n");
    if (a >= b) {
        if (a >= c) {
            if (b >= c) {
                if (a == b) {
                    if (b == c) {
                        printf("All three numbers are equal to %d\n", a);
                    } else {
                        printf("a and b are equal (%d) and both are the largest (greater than c: %d)\n", a, c);
                    }
                } else {
                    printf("a (%d) is the largest\n", a);
                }
            } else {
                if (a == c) {
                    printf("a and c are equal (%d) and both are the largest (greater than b: %d)\n", a, b);
                } else {
                    printf("a (%d) is the largest\n", a);
                }
            }
        } else {
            printf("c (%d) is the largest\n", c);
        }
    } else {
        if (b >= c) {
            if (b == c) {
                printf("b and c are equal (%d) and both are the largest (greater than a: %d)\n", b, a);
            } else {
                printf("b (%d) is the largest\n", b);
            }
        } else {
            printf("c (%d) is the largest\n", c);
        }
    }

    return 0;
}
*/


/*
===============================================================================
 WAY 3: ELSE-IF LADDER APPROACH
===============================================================================
Standard, highly readable approach using logical AND (&&) operators.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\n--- WAY 3: ELSE-IF LADDER ---\n");
    if (a == b && b == c) {
        printf("All three numbers are equal to %d\n", a);
    } 
    else if (a == b && a > c) {
        printf("a and b are equal (%d) and both are the largest (greater than c: %d)\n", a, c);
    } 
    else if (b == c && b > a) {
        printf("b and c are equal (%d) and both are the largest (greater than a: %d)\n", b, a);
    } 
    else if (a == c && a > b) {
        printf("a and c are equal (%d) and both are the largest (greater than b: %d)\n", a, b);
    } 
    else if (a > b && a > c) {
        printf("a (%d) is the largest\n", a);
    } 
    else if (b > a && b > c) {
        printf("b (%d) is the largest\n", b);
    } 
    else {
        printf("c (%d) is the largest\n", c);
    }

    return 0;
}
*/


/*
===============================================================================
 WAY 4: CORRECTED MODULAR APPROACH (FIND MAX FIRST, THEN COMPARE)
===============================================================================
Finds the maximum value first using simple comparisons, then checks which
variables match the maximum value.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\n--- WAY 4: CORRECTED MODULAR APPROACH ---\n");

    // Step 1: Calculate maximum value
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    // Step 2: Compare max against variables to determine exact case
    if (a == max && b == max && c == max) {
        printf("All three numbers are equal to %d\n", max);
    }
    else if (a == max && b == max) {
        printf("a and b are equal (%d) and both are the largest (greater than c: %d)\n", a, c);
    }
    else if (b == max && c == max) {
        printf("b and c are equal (%d) and both are the largest (greater than a: %d)\n", b, a);
    }
    else if (a == max && c == max) {
        printf("a and c are equal (%d) and both are the largest (greater than b: %d)\n", a, b);
    }
    else if (a == max) {
        printf("a (%d) is the largest\n", a);
    }
    else if (b == max) {
        printf("b (%d) is the largest\n", b);
    }
    else {
        printf("c (%d) is the largest\n", c);
    }

    return 0;
}
*/



/*
===============================================================================
Output:
===============================================================================
Enter three integers (a, b, c): 15
15
15

--- WAY 1: CHAINED TERNARY OPERATOR (RUNNABLE CODE) ---
All three numbers are equal to 15
///////////////////////////////////////////////////////////////////////////////
Enter three integers (a, b, c): 15
15                                                        
10                                  

--- WAY 1: CHAINED TERNARY OPERATOR (RUNNABLE CODE) ---
a and b are equal (15) and both are the largest (greater than c: 10)
///////////////////////////////////////////////////////////////////////////////
Enter three integers (a, b, c): 15
10
15

--- WAY 1: CHAINED TERNARY OPERATOR (RUNNABLE CODE) ---
a and c are equal (15) and both are the largest (greater than b: 10)
///////////////////////////////////////////////////////////////////////////////
Enter three integers (a, b, c): 10
15
15

--- WAY 1: CHAINED TERNARY OPERATOR (RUNNABLE CODE) ---
b and c are equal (15) and both are the largest (greater than a: 10)
///////////////////////////////////////////////////////////////////////////////
Enter three integers (a, b, c): 10
15
20

--- WAY 1: CHAINED TERNARY OPERATOR (RUNNABLE CODE) ---
c (20) is the largest
///////////////////////////////////////////////////////////////////////////////
Enter three integers (a, b, c): 10
6
4

--- WAY 1: CHAINED TERNARY OPERATOR (RUNNABLE CODE) ---
a (10) is the largest
///////////////////////////////////////////////////////////////////////////////
Enter three integers (a, b, c): 5
15
10

--- WAY 1: CHAINED TERNARY OPERATOR (RUNNABLE CODE) ---
b (15) is the largest
*/