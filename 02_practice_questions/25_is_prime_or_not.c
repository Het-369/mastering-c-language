/*
===============================================================================
 PRACTICE QUESTION 26: CHECK PRIME NUMBER
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes an integer 'N' from the user and checks whether 
it is a Prime number or not using a loop.

CONSTRAINTS / RULES:
- Numbers <= 1 are NOT prime.
- Check divisibility from 2 up to N/2.
- Use a flag variable (e.g., isPrime = 1).
- If divisible by any number, set isPrime = 0 and break the loop.

EXAMPLE:
Input: N = 7  --> Output: 7 is a Prime number.
Input: N = 10 --> Output: 10 is NOT a Prime number.
===============================================================================
*/

// 1. Include necessary header files
#include<stdio.h>

// 2. Main function definition
int main(){

    // 3. Variable declarations (num, isPrime = 1)
int num,isPrime=1;

    // 4. Input prompt and scanf with validation (scanf != 1)
    printf("enter any integer number:");
    if(scanf(" %d",&num) !=1){
        printf("invalid number try again:");
        return 1;
    }
 

    // 5. Logic: Check if num <= 1 (not prime)
       if(num<=1){
        printf("your enterd number does not meet the requirement for prime, enter the number > 2:");
        return 1;
    }

    // 6. Logic: Loop from 2 to num/2 to check divisibility
    for(int i=2;i<=(num/2);i++){
        if(num%i==0){
            isPrime=0;
            break;
        }
    }

    // 7. Print result based on isPrime flag
    if(isPrime==0){
        printf("number %d is not prime:",num);
    }
    else{
        printf("number %d is prime:",num);
    }


    // 8. Return statement
    return 0;
}
/*
===============================================================================
Output:
===============================================================================
enter any integer number:7
number 7 is prime:

enter any integer number:10
number 10 is not prime:

*/