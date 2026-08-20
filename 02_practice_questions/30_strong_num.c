/*
===============================================================================
 PRACTICE QUESTION 32: CHECK STRONG NUMBER
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes a positive integer 'N' and checks whether it is 
a Strong Number (Sum of factorials of digits equals the number itself).

EXAMPLE:
Input: N = 145 --> Output: 145 is a Strong Number (1! + 4! + 5! = 145)
===============================================================================
*/

#include <stdio.h>

int main() {
   int num,temp,sum=0,remainder;

    // 1. Input prompt & validation
   printf("enter a number to check is it strong number or not:\t");
   if(scanf("%d",&num) != 1 || num<0){
    printf("invalid num:");
    return 1;
   }
   temp=num;
   int i=1;
    // 2. Process each digit
        while(num!=0){
            remainder=num%10;
            int fact=1,i=1;
            while(i<=remainder){
                fact*=i;
                i++;
            }
            sum+=fact;
            num/=10;
        }
    // 3. Compare sum with original number
    if(sum==temp){
        printf("strong");
    }
    else{
        printf("not strong");
    }
    return 0;
}
/*
===============================================================================
Output:
===============================================================================
enter a number to check is it strong number or not:     145
strong
*/