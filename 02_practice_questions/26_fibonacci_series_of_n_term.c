/*
===============================================================================
 PRACTICE QUESTION 27: PRINT FIBONACCI SERIES UP TO N TERMS
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes an integer 'N' (number of terms) from the user 
and prints the Fibonacci series up to N terms using a loop.

CONSTRAINTS / RULES:
- N must be greater than 0.
- First two terms are always 0 and 1 (t1 = 0, t2 = 1).
- Use a loop to print 'N' terms.
- For N=1, print only 0. For N=2, print 0, 1.
- For N > 2, calculate nextTerm = t1 + t2, then update t1 = t2, t2 = nextTerm.

EXAMPLE:
Input: N = 5  --> Output: 0, 1, 1, 2, 3
Input: N = 7  --> Output: 0, 1, 1, 2, 3, 5, 8
===============================================================================
*/

// 1. Include necessary header files
#include <stdio.h>

// 2. Main function definition
int main() {

    // 3. Variable declarations (n, t1 = 0, t2 = 1, nextTerm)
    int N,previousTerm=0,currentTerm=1,nextTerm;

    // 4. Input prompt and scanf with validation (scanf != 1 || n <= 0)
    printf("enter 'N' terms:");
    if(scanf(" %d",&N) != 1 || N<=0){
        printf("invalid input you need to enter atleast 1 term as a N:");
        return 1;
    }
   

    // 5. Logic: Loop to print N terms of Fibonacci series
    for(int i=1;i<=N;i++){
        if(i==1){
            printf("%d",previousTerm);
            continue;    
        }
        if(i==2){
            printf(", %d",currentTerm);
            continue;
        }
        nextTerm=previousTerm+currentTerm;
        previousTerm=currentTerm;
        currentTerm=nextTerm;
        printf(", %d",nextTerm);
    }
    
    // 6. Return statement
    return 0;
}
/*
enter 'N' terms:7
Input: N = 7  -->Output:  0, 1, 1, 2, 3, 5, 8

*/