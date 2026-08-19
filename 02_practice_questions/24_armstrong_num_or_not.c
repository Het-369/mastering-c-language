/*
===============================================================================
 PRACTICE QUESTION 25: CHECK ARMSTRONG NUMBER (FOR 3-DIGIT NUMBERS)
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes a 3-digit integer 'N' and checks whether it is an 
Armstrong number or not using a 'while' loop.

CONSTRAINTS / RULES:
- Store the original number in a temporary variable (temp = num).
- Extract each digit using modulo (% 10).
- Calculate sum of cubes of digits: sum = sum + (digit * digit * digit).
- Remove the last digit using division (/ 10).
- Compare original number with calculated sum.

EXAMPLE:
Input: N = 153  --> Output: 153 is an Armstrong number.
Input: N = 123  --> Output: 123 is NOT an Armstrong number.
===============================================================================
*/

// 1. Include necessary header files
#include<stdio.h>

// 2. Main function definition
int main(){

    // 3. Variable declarations (num, temp, remainder, sum = 0)
    int num;

    // 4. Input prompt and scanf with validation (scanf != 1 || num < 0)
    printf("enter a any integer number:\t");
    if(scanf(" %d",&num) !=1 || num<0 ){
        printf("invalid number:");
        return 1;
    }
    // 5. Store original number (temp = num)
    int temp=num;
    int count=0;
    while(temp!=0){
        count++;
        temp /= 10;
    }
    if(num==0){
     count=1;
    }
    temp=num;

    // 6. Logic: 'while' loop to calculate sum of cubes of digits
    int powerDigit=1,sum=0,remainder;
    while(num != 0){
        remainder=num%10;
        for(int i=1;i<=count;i++){
            powerDigit*=remainder;
        }
        sum+=powerDigit;
        powerDigit=1;
        num/=10;
    }

    // 7. Check if temp == sum and print result
    (temp==sum)?printf("number %d is armstrong number:",temp):printf("number %d is not armstrong number:",temp);  

    // 8. Return statement
    return 0;

}

/*
enter a any integer number:     153
number 153 is armstrong number:

*/