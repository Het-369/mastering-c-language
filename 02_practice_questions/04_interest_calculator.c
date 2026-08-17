/*
===============================================================================
 PRACTICE QUESTION 4: SIMPLE INTEREST CALCULATOR
===============================================================================
PROBLEM STATEMENT:
Write a C program to input Principal amount (P), Rate of interest (R), 
and Time in years (T) from the user, and calculate the Simple Interest (SI).
(Formula: SI = (P * R * T) / 100)

KEY CONCEPTS COVERED:
- User Input with scanf()
- Floating-point calculations
- Output formatting (%.2f)
===============================================================================
*/

#include<stdio.h>

int main(){

        //Declare a veriables and taking input from user 
        float principalAmount,rateOfInterest,timeInYear;
        printf("enter a principal amount(INR):\t");
        scanf(" %f",&principalAmount);

        printf("enter rate of intrest(percentage):\t");
        scanf(" %f",&rateOfInterest);

        printf("enter time in year:\t");
        scanf(" %f",&timeInYear);

        

        //Logic part ->Formula: SI = (P * R * T) / 100)
        float simpleInterest=((principalAmount*rateOfInterest*timeInYear)/100);

        //Print output
        printf("Simple inetrest of give values: %.2f INR",simpleInterest);

    return 0;

       
}

 /*
        =======================================================================
        Output:
        =======================================================================
        enter a principal amount(INR):  5000000
        enter rate of interest(percentage):      9.3
        enter time in year:     7
        Simple interest of give values: 3255000.07 INR
*/