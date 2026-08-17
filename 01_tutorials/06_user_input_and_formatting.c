/*
  ===========================================================================
  TOPIC: USER INPUT (scanf), FORMAT SPECIFIERS & BUFFER IN C
  ===========================================================================
  THEORY OVERVIEW:

  1. STANDARD INPUT (scanf):
     - Function used to read formatted input from the standard input (keyboard).
     - Syntax: scanf("format_specifier", &variable_name);
     - Address-of Operator (&): Provides the memory address of the variable 
       where the input value should be stored. (NOT used for strings/arrays).

  2. FORMAT SPECIFIERS:
     - %d  : Integer (int)
     - %f  : Floating point (float)
     - %lf : Double precision float (double)
     - %c  : Single character (char)

  3. INPUT BUFFER & LEADING SPACE TRICK:
     - When you press ENTER after typing an input, a newline character ('\n') 
       remains in the input buffer.
     - Reading a character (`%c`) immediately after an integer (`%d`) might 
       read that residual '\n' instead of waiting for new input.
     - Solution: Use a leading space in format specifier `scanf(" %c", &charVar)` 
       to skip all white spaces and newlines.

  4. ESCAPE SEQUENCES & FIELD WIDTH:
     - \n : Newline
     - \t : Horizontal Tab
     - %5d: Field width (prints right-aligned in 5 spaces)
  ===========================================================================
*/

#include <stdio.h>

int main() {
    // Variable Declarations
    int age;
    float height;
    char grade;
    int num1, num2;

    // =========================================================================
    // SECTION 1: BASIC SINGLE INPUTS & ADDRESS-OF OPERATOR (&)
    // =========================================================================
    /*
      THEORY:
      scanf needs the exact memory address where it should write the input.
      `&age` means "Address of variable age".
    */

    printf("=== SECTION 1: Reading Integer & Float ===\n");
    
    printf("Enter your age (integer): ");
    scanf("%d", &age);

    printf("Enter your height in meters (float, e.g., 1.75): ");
    scanf("%f", &height);

    printf("--> Stored Age: %d years\n", age);
    printf("--> Stored Height: %.2f meters\n\n", height);


    // =========================================================================
    // SECTION 2: THE INPUT BUFFER TRAP & CHARACTER INPUT
    // =========================================================================
    /*
      THEORY & COMMON PITFALL:
      After entering 'height' above, the user presses ENTER. 
      That ENTER key leaves a '\n' (newline) sitting in the input buffer.
      
      If we write `scanf("%c", &grade);`, it immediately reads '\n' and skips!
      
      SOLUTION: `scanf(" %c", &grade);` 
      Notice the space before %c. The space instructs scanf to ignore leftover 
      newlines, tabs, and spaces in the buffer.
    */

    printf("=== SECTION 2: Character Input & Buffer Handling ===\n");
    printf("Enter your target grade (A/B/C): ");
    
    // Space before %c is CRITICAL here to clear leftover newline from buffer
    scanf(" %c", &grade);

    printf("--> Stored Grade: %c\n\n", grade);


    // =========================================================================
    // SECTION 3: READING MULTIPLE INPUTS IN A SINGLE SCANF
    // =========================================================================
    /*
      THEORY:
      scanf can read multiple values at once separated by spaces or tabs.
      Syntax: scanf("%d %d", &var1, &var2);
    */

    printf("=== SECTION 3: Multiple Inputs in One Line ===\n");
    printf("Enter two space-separated integers (e.g., 10 20): ");
    
    scanf("%d %d", &num1, &num2);

    printf("--> Num 1: %d | Num 2: %d | Sum: %d\n\n", num1, num2, (num1 + num2));


    // =========================================================================
    // SECTION 4: OUTPUT FORMATTING & ESCAPE SEQUENCES
    // =========================================================================
    /*
      THEORY:
      - \t creates tabular alignment.
      - %5d pads the number to take at least 5 character spaces (Right Aligned).
      - %-5d pads to take 5 character spaces (Left Aligned).
    */

    printf("=== SECTION 4: Formatting & Alignment ===\n");
    printf("Item\t\tQty\tPrice\n");
    printf("-----------------------------------\n");
    printf("Mushroom\t%5d\t$%6.2f\n", 50, 199.50);
    printf("Fertilizer\t%5d\t$%6.2f\n\n", 5, 1250.00);

    return 0;
}

/*
===========================================================================
EXPECTED PROGRAM OUTPUT (SAMPLE INTERACTIVE RUN):
===========================================================================
=== SECTION 1: Reading Integer & Float ===
Enter your age (integer): 21
Enter your height in meters (float, e.g., 1.75): 1.78
--> Stored Age: 21 years
--> Stored Height: 1.78 meters

=== SECTION 2: Character Input & Buffer Handling ===
Enter your target grade (A/B/C): A
--> Stored Grade: A

=== SECTION 3: Multiple Inputs in One Line ===
Enter two space-separated integers (e.g., 10 20): 15 30
--> Num 1: 15 | Num 2: 30 | Sum: 45

=== SECTION 4: Formatting & Alignment ===
Item            Qty     Price
-----------------------------------
Mushroom           50   $199.50
Fertilizer          5   $1250.00
===========================================================================
*/