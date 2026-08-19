/*
===============================================================================
 PRACTICE QUESTION 24: CHECK PALINDROME NUMBER
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes an integer 'N' from the user and checks whether 
it is a Palindrome or not using a 'while' loop.

CONSTRAINTS / RULES:
- Store the original number in a temporary variable before modifying it.
- Reverse the number using a 'while' loop.
- Compare original number with the reversed number using an 'if-else' condition.
- Print "Palindrome" or "Not Palindrome" accordingly.

EXAMPLE:
Input: N = 121  --> Output: 121 is a Palindrome number.
Input: N = 123  --> Output: 123 is NOT a Palindrome number.
===============================================================================
*/

// 1. Include necessary header files
#include<stdio.h>

// 2. Main function definition
int main(){

    // 3. Variable declarations (num, originalNum, rev = 0, digit)
    int num;

    // 4. Input prompt and scanf
    printf("enter a num you want to check for palindrome:");
    if(scanf("%d",&num)!=1){
        printf("invalid number :");
        return 1;
    }
    if(num<0){
        printf("number %d is not palindrome",num);
        return 1;
    }

    // 5. Store original number (originalNum = num)
    int temp=num;
    int reverse=0;
    // 6. Logic: 'while' loop to reverse the number
    while(num!=0){
        int remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }
    

    // 7. Check if originalNum == rev and print result
    if(temp==reverse){
        printf("number %d is palindrome:",temp);
    }
    else{
        printf("number %d is not palindrome:",temp);
    }

    // 8. Return statement
    return 0;
}
/*
===============================================================================
Output:
===============================================================================
enter a num you want to check for palindrome:121
number 121 is palindrome:
*/