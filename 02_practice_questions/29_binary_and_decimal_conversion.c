/*
===============================================================================
 PRACTICE QUESTION 31: BINARY <-> DECIMAL CONVERSION (WITH VALIDATION)
===============================================================================
*/

#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nChoice (1/2): ");
    if (scanf("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
        printf("Invalid choice!\n");
        return 1;
    }

    if (choice == 1) {
        long long bin, temp;
        int dec = 0, i = 0;
        printf("Enter Binary (only 0s and 1s): ");
        if (scanf("%lld", &bin) != 1 || bin < 0) {
            printf("Invalid binary input!\n");
            return 1;
        }

        temp = bin;
        while (temp > 0) {
            int rem = temp % 10;
            // Validation: Check if digit is other than 0 or 1
            if (rem != 0 && rem != 1) {
                printf("Error: Entered number is NOT a valid binary!\n");
                return 1;
            }
            dec += rem * pow(2, i++);
            temp /= 10;
        }
        printf("Binary %lld = Decimal %d\n", bin, dec);

    } else {
        int dec, temp, i = 0;
        long long bin = 0;
        printf("Enter Positive Decimal: ");
        if (scanf("%d", &dec) != 1 || dec < 0) {
            printf("Invalid decimal input!\n");
            return 1;
        }

        temp = dec;
        if (temp == 0) {
            printf("Decimal 0 = Binary 0\n");
            return 0;
        }

        while (temp > 0) {
            bin += (temp % 2) * pow(10, i++);
            temp /= 2;
        }
        printf("Decimal %d = Binary %lld\n", dec, bin);
    }

    return 0;
}
/*
===============================================================================
Output:
===============================================================================
1. Binary to Decimal
2. Decimal to Binary
Choice (1/2): 1
Enter Binary (only 0s and 1s): 100
Binary 100 = Decimal 4

*/