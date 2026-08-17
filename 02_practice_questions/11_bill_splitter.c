/*
===============================================================================
 PRACTICE QUESTION 11: BILL SPLITTER WITH TYPECASTING
===============================================================================
PROBLEM STATEMENT:
Write a C program to input total bill amount (float) and number of friends (int). 
Calculate each person's exact share (float) and show the truncated share (int) 
using explicit typecasting to demonstrate precision loss.

KEY CONCEPTS COVERED:
- Implicit Promotion vs Explicit Demotion (Typecasting)
- Data Precision Loss
===============================================================================
*/

#include <stdio.h>

int main() {
    // 1. Variable Declaration
    float totalBillAmount,exactShareOfOnePerson,pricisionLoss;
    int noOfFriends,explicitCastToInt;

    // 2. User Inputs (Bill Amount & Friend Count)
    printf("enter the total bill amount:\t");
    scanf(" %f",&totalBillAmount);
    printf("enter the number of friends:\t");
    scanf(" %d",&noOfFriends);
    // 3. Logic: Exact share calculation and Explicit Cast to int
    exactShareOfOnePerson=totalBillAmount/noOfFriends;
    explicitCastToInt=(int)exactShareOfOnePerson;
    pricisionLoss=exactShareOfOnePerson-explicitCastToInt;

    // 4. Output: Display exact float share and truncated int share
    printf("\nexact share of one person: %.3f",exactShareOfOnePerson);
    printf("\nexact share of one person in explicit cast to int: %d",explicitCastToInt);
    printf("\npricision loss: %.3f",pricisionLoss);
    return 0;
}
/*
===============================================================================
Output:
===============================================================================
enter the total bill amount:    10158.62
enter the number of friends:    3

exect share of one person: 3386.207
exect share of one person in explicit cast to int: 3386
pricision loss: 0.207

*/