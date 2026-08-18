/*
===============================================================================
 PRACTICE QUESTION 15: SIMPLE CALCULATOR
===============================================================================
PROBLEM STATEMENT:
Create a simple calculator using a `switch-case` statement. The program should:
1. Ask the user for two numbers.
2. Ask the user for an operator (+, -, *, /).
3. Perform the calculation and display the result.
4. Handle division by zero.
===============================================================================
*/

#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    printf("Enter an operator (+, -, *, /):\t ");
    scanf(" %c", &operator);

    printf("Enter two numbers:\t");
    scanf(" %f %f", &num1, &num2);
    
    switch (operator) {
        case '+': 
            printf("\nsum is: %.2f", (num1 + num2));
            break;
                 
        case '-': 
            printf("\nsub is: %.2f", (num1 - num2));
            break;

        case '*': 
            printf("\nmul is: %.2f", (num1 * num2));
            break;

        case '/': 
            if (num2 == 0) {
                printf("\nDenominator cannot be 0 for division!");
                break;
            }
            printf("\ndiv is: %.2f", (num1 / num2));
            break;
            
        default: 
            printf("\ninvalid operator");
    }

    return 0;
}