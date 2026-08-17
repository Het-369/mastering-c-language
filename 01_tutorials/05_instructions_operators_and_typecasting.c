/*
  ===========================================================================
  TOPIC: INSTRUCTIONS, OPERATORS, CONSTANTS & TYPE CONVERSION IN C
  ===========================================================================
  THEORY OVERVIEW:
  
  1. INSTRUCTIONS:
     Statements that tell the computer what action to perform.
     - Type Declaration Instruction: Declaring variables before use.
     - Arithmetic Instruction: Performing calculations (+, -, *, /, %).
     - Control Instruction: Controlling execution flow (if, loops, etc.).

  2. CONSTANTS:
     Fixed values that cannot be altered during program execution.
     - Literal Constants: Direct values (e.g., 10, 'A', 3.14).
     - Symbolic Constants: Defined using 'const' keyword or '#define'.

  3. OPERATORS:
     Symbols used to perform operations on variables and values.
     - Arithmetic: +, -, *, /, % (Modulus returns remainder)
     - Relational: ==, !=, >, <, >=, <= (Returns 1 for True, 0 for False)
     - Logical: && (AND), || (OR), ! (NOT)
     - Assignment & Compound: =, +=, -=, *=, /=, %=
     - Unary (Increment/Decrement): ++ (Pre/Post), -- (Pre/Post)
     - Ternary Operator: (condition) ? true_expr : false_expr

  4. TYPE CONVERSION:
     Converting one data type to another.
     - Implicit Conversion (Type Promotion): Automatic by compiler.
       (char -> int -> float -> double)
     - Explicit Conversion (Typecasting): Manual cast using (type) operator.
  ===========================================================================
*/

#include <stdio.h>

// Symbolic Constant using Preprocessor Directive
#define MAX_SCORE 100

int main() {
    // =========================================================================
    // SECTION 1: INSTRUCTIONS & CONSTANTS
    // =========================================================================
    /*
      THEORY: 
      - Type Declaration: Variables must be declared before use.
      - const keyword makes a variable read-only in memory.
    */
    
    // Type Declaration Instructions
    int a = 10, b = 3, c; 
    const float TAX_RATE = 0.18f; // Symbolic Constant via 'const'

    printf("=== SECTION 1: Instructions & Constants ===\n");
    printf("Max Score (#define): %d\n", MAX_SCORE);
    printf("Tax Rate (const): %.2f\n\n", TAX_RATE);


    // =========================================================================
    // SECTION 2: ARITHMETIC OPERATORS & MODULUS (%)
    // =========================================================================
    /*
      THEORY & LOGIC:
      - Modular Division (%): Works ONLY on integers. Returns remainder.
        Example: 10 % 3 = 1 (Since 3 * 3 = 9, Remainder = 1).
      - Integer Division: 10 / 3 = 3 (Truncates the decimal part).
    */

    int quotient = a / b;
    int remainder = a % b;

    printf("=== SECTION 2: Arithmetic & Modulus ===\n");
    printf("Integer Division (10 / 3): %d\n", quotient);
    printf("Modulus Operator (10 %% 3): %d (Remainder)\n\n", remainder);


    // =========================================================================
    // SECTION 3: INCREMENT / DECREMENT OPERATORS (PRE vs POST)
    // =========================================================================
    /*
      THEORY & LOGIC:
      - Pre-Increment (++x): Increments value FIRST, then uses it in expression.
      - Post-Increment (x++): Uses current value FIRST, then increments it.
    */

    int x = 5;
    int preResult = ++x;  // x becomes 6, then preResult gets 6

    int y = 5;
    int postResult = y++; // postResult gets 5, then y becomes 6

    printf("=== SECTION 3: Increment / Decrement Operators ===\n");
    printf("Pre-Increment (++x): Result = %d, x = %d\n", preResult, x);
    printf("Post-Increment (y++): Result = %d, y = %d\n\n", postResult, y);


    // =========================================================================
    // SECTION 4: RELATIONAL & LOGICAL OPERATORS
    // =========================================================================
    /*
      THEORY:
      In C, Boolean values are represented as integers:
      - 1 represents TRUE
      - 0 represents FALSE
    */

    int age = 20;
    int hasLicense = 1; // 1 = True

    printf("=== SECTION 4: Relational & Logical Operators ===\n");
    printf("Is age >= 18? : %d (1 = True, 0 = False)\n", age >= 18);
    printf("Eligible to drive (age >= 18 && hasLicense)? : %d\n\n", (age >= 18 && hasLicense));


    // =========================================================================
    // SECTION 5: TERNARY OPERATOR (Short-hand If-Else)
    // =========================================================================
    /*
      SYNTAX: (condition) ? value_if_true : value_if_false;
    */

    int num = 15;
    printf("=== SECTION 5: Ternary Operator ===\n");
    (num % 2 == 0) ? printf("%d is EVEN\n\n", num) : printf("%d is ODD\n\n", num);


    // =========================================================================
    // SECTION 6: TYPE CONVERSION (IMPLICIT vs EXPLICIT)
    // =========================================================================
    /*
      THEORY:
      1. Implicit Type Conversion (Automatic):
         When mixing types, C automatically upgrades smaller types to larger types
         (int + float -> float) to prevent precision loss.
      2. Explicit Type Conversion (Typecasting):
         Forced conversion by developer using `(target_type) variable`.
    */

    // Implicit Conversion Example
    int intVal = 7;
    float floatVal = 2.5f;
    float implicitSum = intVal + floatVal; // intVal is automatically converted to float (7.0 + 2.5)

    // Explicit Conversion Example
    float num1 = 5, num2 = 2;
    int wrongDivision =(int) (num1 / num2);       // 5.0 / 2.0 = 2.5 -> stored as 2 (Precision Lost!)
    float correctDivision = num1 / num2;         //    5.0 / 2.0 = 2.5 -> no loss

    printf("=== SECTION 6: Type Conversion ===\n");
    printf("Implicit (int 7 + float 2.5): %.2f\n", implicitSum);
    printf("With Explicit Typecasting ((int)5.0 / 2.0=2): %d (Wrong!)\n", wrongDivision);
    printf("Without Explicit Typecasting (5.0 / 2.0=2.5): %.2f (Correct!)\n", correctDivision);

    return 0;
}

/*
===========================================================================
EXPECTED PROGRAM OUTPUT:
===========================================================================
=== SECTION 1: Instructions & Constants ===
Max Score (#define): 100
Tax Rate (const): 0.18

=== SECTION 2: Arithmetic & Modulus ===
Integer Division (10 / 3): 3
Modulus Operator (10 % 3): 1 (Remainder)

=== SECTION 3: Increment / Decrement Operators ===
Pre-Increment (++x): Result = 6, x = 6
Post-Increment (y++): Result = 5, y = 6

=== SECTION 4: Relational & Logical Operators ===
Is age >= 18? : 1 (1 = True, 0 = False)
Eligible to drive (age >= 18 && hasLicense)? : 1

=== SECTION 5: Ternary Operator ===
15 is ODD

=== SECTION 6: Type Conversion ===
Implicit (int 7 + float 2.5): 9.50
With Explicit Typecasting ((int)5.0/ 2.0=2): 2 (Wrong!)
Without Typecasting (5.0 / 2.0=2.5): 2.50 (Correct!)
===========================================================================
*/