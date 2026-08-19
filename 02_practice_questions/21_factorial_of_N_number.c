/*
===============================================================================
 PRACTICE QUESTION 22: FACTORIAL OF A NUMBER
===============================================================================
PROBLEM STATEMENT:
Write a C program that calculates and prints the factorial of a given non-negative 
integer 'N' using a 'while' loop.

CONSTRAINTS / RULES:
- Use a 'while' loop.
- Factorial of 0 is 1 (0! = 1).
- Validate input: If N < 0, print an error message (Factorial of negative numbers doesn't exist).
- Use `long long` for the factorial variable to prevent integer overflow for larger numbers.

EXAMPLE:
Input: N = 5
Output: Factorial of 5 is: 120 (5 * 4 * 3 * 2 * 1)
===============================================================================
*/

// 1. Include necessary header files
#include<stdio.h>

// 2. Main function definition
int main(){

    // 3. Variable declarations (N, loop counter i, long long fact = 1)
    int num,i=1;
    long long int factorial=1;

    // 4. Input prompt and scanf
    printf("enter non negative integer:\t");
    scanf(" %d",&num);

    // 5. Input Validation (Check if N < 0)
    if(num<0){

            printf("\ninvalid number try again with different number:");
            return 1;
        }
    

    // 6. Logic: 'while' loop to compute factorial
    while(i<=num){
        factorial=factorial*i;
        i++;
    }
    printf("factorial of %d is:\t%lld",num,factorial);

    // 7. Print result and return statement
    return 0;
}
/*
===============================================================================
Output:
===============================================================================
enter non negative integer:     4
factorial of 4 is:      24

*/