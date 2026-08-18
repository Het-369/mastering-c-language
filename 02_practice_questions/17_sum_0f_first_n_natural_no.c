/*
===============================================================================
 PRACTICE QUESTION 17: SUM OF FIRST N NATURAL NUMBERS
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes a positive integer 'N' from the user and calculates 
the sum of the first N natural numbers (1 + 2 + ... + N) using a 'while' loop.

CONSTRAINTS / RULES:
- Use a 'while' loop.
- Validate input: If N <= 0, display an error message and exit.

EXAMPLE:
Input: N = 5
Calculation: 1 + 2 + 3 + 4 + 5
Output: Sum of first 5 natural numbers is 15
===============================================================================
*/

// 1. Include necessary header files
#include<stdio.h>

// 2. Main function definition
int main(){

    // 3. Variable declarations (Input variable, loop counter, sum accumulator)
    int num,sum=0,i=1;

    // 4. Input prompt and scanf
    printf("enter a any natural number:\t");
    scanf(" %d",&num);

    // 5. Input Validation (Check if N <= 0)
    if(num<=0){
        printf("entered number is invalid try with another number");
        return 1;
    }

    // 6. Logic: 'while' loop to accumulate sum from 1 to N
    while(i<=num){
        sum=sum+i;
        i++;
    }

    // 7. Print final formatted result
    printf("\nsum of first %d natural number:\t%d",num,sum);

    // 8. Return statement
    return 0;
}
/*
===============================================================================
Output:
===============================================================================
enter a any natural number:     5

sum of first 5 natural number:  15

*/