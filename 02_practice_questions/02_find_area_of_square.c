/*
  ===========================================================================
  PRACTICE QUESTION 2: AREA OF A SQUARE
  ===========================================================================
  PROBLEM STATEMENT:
  Write a C program to calculate and display the area of a square using 
  its side length (Formula: Area = side * side).

  KEY CONCEPTS COVERED:
  - Floating-point Variables (float)
  - Basic Multiplication (*)
  - Output Formatting with Decimal Precision (%.2f)
  ===========================================================================
*/

#include<stdio.h>
int main(){
        // 1. Variable Declaration and Initialization
        float side=5.5f;        // Side length of the square in units
        float area;

        // 2. Logic: Area of Square = side * side
        area=side*side;

        // 3. Output Result
        printf("--- RESULT ---\n");
        printf("side of square: %.2f units\n",side);
        printf("area of square: %.2f units\n",area);

    return 0;
}
/*
===========================================================================
EXPECTED OUTPUT:
===========================================================================
--- RESULT ---
Side of Square: 5.50 units
Area of Square: 30.25 sq units
===========================================================================
*/

