/*
===============================================================================
 PRACTICE QUESTION 20: PRINT EVEN NUMBERS IN A RANGE
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes a positive integer 'N' from the user and prints 
all EVEN numbers from 1 to N using a 'for' loop and an 'if' condition inside.

CONSTRAINTS / RULES:
- Use a 'for' loop.
- Use the modulus operator (%) to check if a number is even (i % 2 == 0).
- Validate input: If N <= 0, print an error message and exit.
- Print output in a clean, spaced format (e.g., "2 4 6 8 10").

EXAMPLE:
Input: N = 10
Output:
Even numbers from 1 to 10:
2 4 6 8 10
===============================================================================
*/

// 1. Include necessary header files
#include<stdio.h>


// 2. Main function definition
    int main(){

    // 3. Variable declarations (N, loop counter i)
        int num,i;


    // 4. Input prompt and scanf
        printf("enter number to print even no series till that no:\n");
        scanf(" %d",&num);

    // 5. Input Validation (Check if N <= 0)
        if(num<=0 || num==1){
            printf("\ninvalid number try with other number:");
            return 1;
        }

    // 6. Logic: 'for' loop from 1 to N with 'if' condition (i % 2 == 0) to print even numbers
        
        /*
            for(i=1;i<=num;i++){
                if(i%2==0){
                    printf("\t%d",i);
                }
            }
        */

        
        /*
            for (i = 2; i <= num; i += 2) {
                printf("%d ", i);
        */

    
        for (i = 1; i <= num; i++) {
            if ((i & 1) == 0) { // Bitwise AND check for even
            printf("%d ", i);
            }
        }
        


    // 7. Return statement
            return 0;
}

/*
===============================================================================
Output:
===============================================================================
enter number to print even no series till that no:
18
        2       4       6       8       10      12      14      16      18

*/