/*
===============================================================================
 PRACTICE QUESTION 13: FAST MULTIPLY & DIVIDE BY 2 USING BIT SHIFTING
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes an integer from the user and calculates:
1. The number multiplied by 2 using Left Shift (<<)
2. The number divided by 2 using Right Shift (>>)

KEY CONCEPTS COVERED:
- Bitwise Left Shift (<<) and Right Shift (>>)
- Performance optimization over standard * and / operators
===============================================================================
*/

#include <stdio.h>
#include<stdbool.h>

int main() {
    // 1. Variable Declaration
    int num;
    int multipliedVal;
    int dividedVal;
    float finalDividedVal;
    bool isOdd;

    // 2. User Input
    printf("\nEnter an integer number:\t");
    scanf(" %d",&num);

    // 3. Logic: Bitwise Left Shift and Right Shift
    isOdd=num&1;
    multipliedVal=num<<1;
    dividedVal=num>>1;
    finalDividedVal=(isOdd==1)?(dividedVal+0.5):(dividedVal);
    

    // 4. Output Result
    printf("\nmultiplied value of number with 2:\t%d",multipliedVal);
    printf("\ndivided value of number with 2:\t\t%.2f",finalDividedVal);
    return 0;
}
/*
===============================================================================
Output:
===============================================================================
Enter an integer number:        9

multiplied value of number with 2:      18
divided value of number with 2:         4.50

Enter an integer number:        8

multiplied value of number with 2:      16
divided value of number with 2:         4.00
*/