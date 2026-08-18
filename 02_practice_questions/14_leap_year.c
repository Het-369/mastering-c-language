/*
===============================================================================
 PRACTICE QUESTION 14: LEAP YEAR CHECKER
===============================================================================
PROBLEM STATEMENT:
Write a C program to check whether a given year is a leap year or not using 
nested if-else OR logical operators (&&, ||).
===============================================================================
*/

#include <stdio.h>

int main() {
    // 1. Variable Declaration (Use 'int' for years, not double)
    int year;

    // 2. User Input
    printf("Enter a year: ");
    scanf("%d", &year);

    // 3. Logic: Check Leap Year Rules
    if (year % 400 == 0) {
        printf("Year %d is a leap year.\n", year);
    } 
    else if (year % 100 == 0) { // Divisible by 100 but NOT 400
        printf("Year %d is NOT a leap year.\n", year);
    } 
    else if (year % 4 == 0) {   // Divisible by 4 but NOT 100
        printf("Year %d is a leap year.\n", year);
    } 
    else {
        printf("Year %d is NOT a leap year.\n", year);
    }

    return 0;
}

/*
===============================================================================
Output Examples:
===============================================================================
Enter a year: 2000
Year 2000 is a leap year.

Enter a year: 1900
Year 1900 is NOT a leap year.

Enter a year: 2024
Year 2024 is a leap year.
===============================================================================
*/