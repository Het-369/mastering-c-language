/*
===============================================================================
 PRACTICE QUESTION 18: MULTIPLICATION TABLE
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes a positive integer from the user and prints its 
multiplication table from 1 to 10 using a 'for' loop.

CONSTRAINTS / RULES:
- Use a 'for' loop.
- Validate input: If number <= 0, print an error message and exit.
- Output format should be clear (e.g., "5 x 1 = 5").

EXAMPLE:
Input: 5
Output:
5 x 1 = 5
5 x 2 = 10
...
5 x 10 = 50
===============================================================================
*/

// 1. Include necessary header files
#include<stdio.h>

// 2. Main function definition
int main(){

    // 3. Variable declarations (Input number, loop counter)
    int num,i=1,mul=1;

    // 4. Input prompt and scanf
    printf("\n\nenter a integer number of which you want a table:\t");
    scanf(" %d",&num);

    // 5. Input Validation (Check if num <= 0)
    if(num<=0){
        printf("invalid num try with another number:\n");
        return 1;
    }

    // 6. Logic: 'for' loop to iterate from 1 to 10 and print table
    for(i=1;i<=10;i++){
        mul=num*i;
        printf("\n%d*%d=%d",num,i,mul);
    }


    // 7. Return statement
    return 0;

}
/*
===============================================================================
Output:
===============================================================================
enter a integer number of which you want a table:       3

3*1=3
3*2=6
3*3=9
3*4=12
3*5=15
3*7=21
3*8=24
3*9=27
3*10=30

*/