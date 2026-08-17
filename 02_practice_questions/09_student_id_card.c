/*
=======================================================================
PROBLEM STATEMENT:
Write a C program to take inputs in sequence: Roll Number (int), Grade (char), 
and Percentage (float). Handle the input buffer issue when taking char input.

KEY CONCEPTS COVERED:
- Input Buffer Handling (`scanf(" %c")` with leading space)
- Formatting Output using Escape Sequences (\t, \n)
===============================================================================
*/

#include <stdio.h>

int main() {
    // 1. Variable Declaration
    int rollNum;
    char grade;
    float percentage;
    // 2. User Inputs (Integer, Character with space trick, Float)
    printf("enter your roll num:\t");
    scanf(" %d",&rollNum);
    printf("enter your grade:\t");
    scanf(" %c",&grade);
    printf("enter your percentage:\t");
    scanf(" %f",&percentage);
    // 3. Display Formatted Student ID Card
    printf("\nroll num: %d",rollNum);
    printf("\ngrade: %c",grade);
    printf("\npercentage: %.2f",percentage);
    return 0;
}
/*
===============================================================================
Output:
===============================================================================
enter your roll num:    69
enter your grade:       A
enter your percentage:  97

roll num: 69
grade: A
percentage: 97.00
*/