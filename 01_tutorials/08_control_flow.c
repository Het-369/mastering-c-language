/*
===============================================================================
 TUTORIAL 08: CONTROL FLOW (DECISION MAKING & LOOPS)
===============================================================================
DESCRIPTION:
Comprehensive guide covering Statements, Relational/Logical Operators, 
Decision-Making structures (if, else-if, nested if, switch), Loops (for, 
while, do-while), and Jump Statements (break, continue).
===============================================================================
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    // =========================================================================
    // SECTION 1: IF, IF-ELSE & ELSE-IF LADDER
    // =========================================================================
    /*
       CONCEPT:
       - 'if' checks a condition. If TRUE (non-zero), the code block runs.
       - 'else' runs when all preceding 'if' / 'else if' conditions are FALSE.
       - 'else if' allows checking multiple conditions sequentially.
    */
    printf("=== SECTION 1: IF, IF-ELSE & ELSE-IF LADDER ===\n");

    int marks = 85;

    printf("Student Marks: %d\n", marks);
    printf("Grade Status: ");

    if (marks >= 90) {
        printf("Grade A+ (Outstanding)\n");
    } else if (marks >= 75) {
        printf("Grade A (Excellent)\n");
    } else if (marks >= 50) {
        printf("Grade B (Pass)\n");
    } else {
        printf("Grade F (Fail)\n");
    }
    printf("\n");

    /*
       OUTPUT (Section 1):
       === SECTION 1: IF, IF-ELSE & ELSE-IF LADDER ===
       Student Marks: 85
       Grade Status: Grade A (Excellent)
    */


    // =========================================================================
    // SECTION 2: NESTED IF STATEMENTS
    // =========================================================================
    /*
       CONCEPT:
       An 'if' inside another 'if'. Used when a secondary condition needs to be 
       evaluated ONLY after a primary condition evaluates to TRUE.
    */
    printf("=== SECTION 2: NESTED IF ===\n");

    int age = 20;
    bool hasVoterID = true;

    printf("Checking Voting Eligibility (Age: %d, Has ID: %d):\n", age, hasVoterID);

    if (age >= 18) {
        // Primary condition passed: Check inner/nested condition
        if (hasVoterID) {
            printf("-> Eligible to vote!\n");
        } else {
            printf("-> Age requirement met, but Voter ID missing. Cannot vote.\n");
        }
    } else {
        printf("-> Not eligible (Underage).\n");
    }
    printf("\n");

    /*
       OUTPUT (Section 2):
       === SECTION 2: NESTED IF ===
       Checking Voting Eligibility (Age: 20, Has ID: 1):
       -> Eligible to vote!
    */


    // =========================================================================
    // SECTION 3: SWITCH-CASE STATEMENT
    // =========================================================================
    /*
       CONCEPT:
       - Multi-way branch statement testing a variable against integral values.
       - 'break' prevents execution from falling through to subsequent cases.
       - 'default' executes if no case matches.
    */
    printf("=== SECTION 3: SWITCH-CASE ===\n");

    int dayNumber = 3;

    printf("Day %d of the week corresponds to: ", dayNumber);

    switch (dayNumber) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid Day Number!\n");
    }
    printf("\n");

    /*
       OUTPUT (Section 3):
       === SECTION 3: SWITCH-CASE ===
       Day 3 of the week corresponds to: Wednesday
    */


    // =========================================================================
    // SECTION 4: LOOPS (FOR, WHILE, DO-WHILE)
    // =========================================================================
    /*
       CONCEPT:
       - 'for' loop: Entry-controlled. Best when the exact iteration count is known.
       - 'while' loop: Entry-controlled. Best when repeating UNTIL a condition changes.
       - 'do-while' loop: Exit-controlled. ALWAYS runs AT LEAST ONCE before testing condition.
    */
    printf("=== SECTION 4: LOOPS ===\n");

    // 1. FOR LOOP
    printf("1. For Loop (Counting 1 to 5):\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // 2. WHILE LOOP
    printf("2. While Loop (Halving 100 until < 10):\n");
    int num = 100;
    while (num >= 10) {
        printf("%d ", num);
        num /= 2;
    }
    printf("\n\n");

    // 3. DO-WHILE LOOP
    printf("3. Do-While Loop (Executes once even if condition is FALSE):\n");
    int count = 10;
    do {
        printf("Executed count = %d (Condition was count < 5)\n", count);
        count++;
    } while (count < 5); // False on first check, but loop body already ran
    printf("\n");

    /*
       OUTPUT (Section 4):
       === SECTION 4: LOOPS ===
       1. For Loop (Counting 1 to 5):
       1 2 3 4 5 

       2. While Loop (Halving 100 until < 10):
       100 50 25 12 

       3. Do-While Loop (Executes once even if condition is FALSE):
       Executed count = 10 (Condition was count < 5)
    */


    // =========================================================================
    // SECTION 5: JUMP STATEMENTS (BREAK & CONTINUE)
    // =========================================================================
    /*
       CONCEPT:
       - 'break': Immediately terminates the nearest loop or switch.
       - 'continue': Skips the remainder of the current iteration and jumps to next iteration.
    */
    printf("=== SECTION 5: BREAK & CONTINUE ===\n");

    printf("Demonstration of Continue (Skip 3) and Break (Stop at 7):\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            printf("[Skip %d] ", i);
            continue; // Jump to next iteration
        }
        if (i == 7) {
            printf("[Break at %d]\n", i);
            break; // Exit loop completely
        }
        printf("%d ", i);
    }
    printf("\n");

    /*
       OUTPUT (Section 5):
       === SECTION 5: BREAK & CONTINUE ===
       Demonstration of Continue (Skip 3) and Break (Stop at 7):
       1 2 [Skip 3] 4 5 6 [Break at 7]
    */

    return 0;
}