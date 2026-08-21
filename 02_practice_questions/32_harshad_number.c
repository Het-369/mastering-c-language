/*
===============================================================================
 PRACTICE QUESTION 34: CHECK HARSHAD / NIVEN NUMBER
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes a positive integer 'N' and checks whether it is 
a Harshad Number (divisible by the sum of its digits).

EXAMPLE:
Input: N = 18  --> Output: 18 is a Harshad Number (18 is divisible by 1+8 = 9)
Input: N = 15  --> Output: 15 is NOT a Harshad Number (15 is not divisible by 1+5 = 6)
===============================================================================
*/

#include <stdio.h>

int main() {
    int n,temp;
    int sum = 0;

    // 1. Input prompt & validation (n > 0)
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input!\n");
        return 1;
    }

    temp = n;

    // 2. Calculate sum of digits using loop
    while(n != 0){
        int remainder=n%10;
        sum+=remainder;
        n/=10;
    }


    // 3. Check divisibility (temp % digitSum == 0) and print result
    if(temp%sum==0){
        printf("Input: N = %d  --> Output: %d is a Harshad Number (%d is divisible by sum of it's digit = %d)",temp,temp,temp,sum);
    }
    else{
        printf("Input: N = %d  --> Output: %d is a not Harshad Number (%d is not divisible by sum of it's digit = %d) ",temp,temp,temp,sum);
    }

    return 0;
}
/*
===============================================================================
Output:
===============================================================================
Enter a positive integer: 18
Input: N = 18  --> Output: 18 is a Harshad Number (18 is divisible by sum of it's digit = 9)

Enter a positive integer: 15
Input: N = 15  --> Output: 15 is a not Harshad Number (15 is not divisible by sum of it's digit = 6) 
*/