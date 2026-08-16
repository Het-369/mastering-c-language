/*
  ===========================================================================
  TOPIC: VARIABLES, DATA TYPES & ASCII IN C
  ===========================================================================
  THEORY OVERVIEW:
  1. Variable: A named memory location used to store values.
  2. Naming Rules (Identifiers):
     - Must start with a letter (a-z, A-Z) or an underscore (_).
     - Cannot start with a digit.
     - Case-sensitive ('val' and 'Val' are different).
     - Reserved keywords (int, float, char) cannot be used as names.
  ===========================================================================
*/

#include <stdio.h>

int main() {
    // =========================================================================
    // SECTION 1: PRIMARY DATA TYPES, SYNTAX & FORMAT SPECIFIERS
    // =========================================================================
    /*
      DATA TYPES SUMMARY:
      - int   : Whole numbers without decimals (e.g., 10, -50) | Specifier: %d
      - float : Fractional numbers with ~6 decimal places     | Specifier: %f
      - double: High-precision decimal numbers (~15 places)   | Specifier: %lf
      - char  : Single character enclosed in single quotes    | Specifier: %c
    */

    // Variable Declaration & Initialization
    int studentAge = 21;
    int rollNumber = 101;
    
    float itemPrice = 99.99f;       // 'f' suffix indicates float literal
    float temperature = -4.5f;

    double piValue = 3.14159265359; // High-precision calculation
    double distanceToSun = 149600000.75;

    char grade = 'A';
    char currencySymbol = '$';

    printf("=== SECTION 1: Primary Data Types ===\n");
    
    // Printing Integers
    printf("Roll No: %d | Age: %d years\n", rollNumber, studentAge);
    
    // Printing Floats (Default 6 decimals vs Custom formatting)
    printf("Price (Default float): %f\n", itemPrice);
    printf("Price (Formatted 2 decimals): $%.2f\n", itemPrice);
    printf("Temperature: %.1f *C\n", temperature);

    // Printing Double
    printf("PI Precision: %.11lf\n", piValue);
    printf("Distance: %.2lf km\n", distanceToSun);

    // Printing Characters
    printf("Grade: %c | Currency: %c\n\n", grade, currencySymbol);


    // =========================================================================
    // SECTION 2: CHARACTER DATA TYPE & ASCII VALUES
    // =========================================================================
    /*
      THEORY:
      Computers do not store actual alphabets; they store numbers.
      Every character corresponds to an integer value known as its ASCII code.
      - 'A' = 65, 'B' = 66, ..., 'Z' = 90
      - 'a' = 97, 'b' = 98, ..., 'z' = 122
      - '0' = 48, '1' = 49, ..., '9' = 57
    */

    char charA = 'A';
    char charZ = 'Z';
    char charSmallA = 'a';
    char numberChar = '5'; // Stored as character, not numeric 5

    printf("=== SECTION 2: Character & ASCII Relationship ===\n");
    
    // Printing as Character (%c) vs Printing as Integer (%d)
    printf("Char: %c ---> ASCII Value: %d\n", charA, charA);
    printf("Char: %c ---> ASCII Value: %d\n", charZ, charZ);
    printf("Char: %c ---> ASCII Value: %d\n", charSmallA, charSmallA);
    printf("Char: '%c' ---> ASCII Value: %d (Not integer 5!)\n\n", numberChar, numberChar);

    // Practical ASCII Math Example: Converting Lowercase to Uppercase
    // Formula: UpperChar = LowerChar - 32 (Since 'a'(97) - 32 = 'A'(65))
    char lowerLetter = 'g';
    char upperLetter = lowerLetter - 32;

    printf("--- ASCII Conversion Example ---\n");
    printf("Original Lowercase: %c (ASCII: %d)\n", lowerLetter, lowerLetter);
    printf("Converted Uppercase: %c (ASCII: %d)\n", upperLetter, upperLetter);

    return 0;
}

/*
===========================================================================
EXPECTED PROGRAM OUTPUT:
===========================================================================
=== SECTION 1: Primary Data Types ===
Roll No: 101 | Age: 21 years
Price (Default float): 99.989998
Price (Formatted 2 decimals): $99.99
Temperature: -4.5 *C
PI Precision: 3.14159265359
Distance: 149600000.75 km
Grade: A | Currency: $

=== SECTION 2: Character & ASCII Relationship ===
Char: A ---> ASCII Value: 65
Char: Z ---> ASCII Value: 90
Char: a ---> ASCII Value: 97
Char: '5' ---> ASCII Value: 53 (Not integer 5!)

--- ASCII Conversion Example ---
Original Lowercase: g (ASCII: 103)
Converted Uppercase: G (ASCII: 71)
===========================================================================
*/