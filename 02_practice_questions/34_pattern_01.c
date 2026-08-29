/*
===============================================================================
 PRACTICE QUESTION 36: RIGHT-ANGLED & INVERTED TRIANGLE PATTERNS
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes 'N' (number of rows) and prints both:
1. Right-Angled Star Triangle
2. Inverted Right-Angled Star Triangle

EXAMPLE (N = 4):
Pattern 1:        Pattern 2:
*                 * * * *
* *               * * *
* * *             * *
* * * *           *
===============================================================================
*/

#include <stdio.h>

int main() {
    int numRow,row,col;

    // 1. Input prompt & validation (n > 0)
    printf("enter the no of row:\t");
    if(scanf("%d",&numRow) != 1 || numRow<=0){
        printf("invalid number of row:");
        return 1;
    }

    // 2. Logic for Right-Angled Triangle (Pattern 1)
    printf("\n--- Pattern 1: Right-Angled Triangle ---\n");
    for(row=1;row<=numRow;row++){
        for(col=1;col<=row;col++){
            
                printf("*");
           
        }
        printf("\n");
    }

    // 3. Logic for Inverted Right-Angled Triangle (Pattern 2)
    printf("\n--- Pattern 2: Inverted Right-Angled Triangle ---\n");
    for(row=numRow;row>=1;row--){
        for(col=row;col>=1;col--){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
/*
===============================================================================
Output:
===============================================================================
enter the no of row:    5

--- Pattern 1: Right-Angled Triangle ---
*
**
***
****
*****

--- Pattern 2: Inverted Right-Angled Triangle ---
*****
****
***
**
*

*/