/*
===============================================================================
 PRACTICE QUESTION 33: CHECK PERFECT NUMBER
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes a positive integer 'N' and checks whether it is 
a Perfect Number or not.

CONSTRAINTS / RULES:
- Find all proper divisors of N (from 1 to N/2).
- Sum up these divisors.
- If sum equals N, print "Perfect Number", else print "NOT a Perfect Number".

EXAMPLE:
Input: N = 6   --> Output: 6 is a Perfect Number.
Input: N = 10  --> Output: 10 is NOT a Perfect Number (1 + 2 + 5 = 8 != 10).
===============================================================================
*/

#include <stdio.h> // Correct library if needed

#include <stdio.h>

int main() {
    int n, sum = 0;

    // 1. Input prompt & validation (n > 0)
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input!\n");
        return 1;
    }

    // 2. Loop from 1 to n/2 to find divisors and calculate sum
    for(int i=1;i<=(n/2);i++){
        if(n%i==0){
            sum+=i;
        }
    }


    // 3. Compare sum with n and print result
    if(sum==n){
        printf("perfect number:");
    }
    else{
        printf("not a perfect number:");
    }


    return 0;
}
/*
===============================================================================
Output:
===============================================================================
Enter a positive integer: 6
perfect number:

Enter a positive integer: 10
not a perfect number:
*/