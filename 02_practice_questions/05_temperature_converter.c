/*
===============================================================================
 PRACTICE QUESTION 5: TEMPERATURE CONVERTER (CELSIUS TO FAHRENHEIT)
===============================================================================
PROBLEM STATEMENT:
Write a C program that takes temperature in Celsius from the user and 
converts it to Fahrenheit.
(Formula: F = (C * 9/5) + 32)

KEY CONCEPTS COVERED:
- Explicit Typecasting / Float Literals (Avoid integer division 9/5)
- Arithmetic Operators
===============================================================================
*/

#include <stdio.h>

int main() {
    // 1. Variable Declaration
    float tempInCelsius,tempInFahrenheit;

    // 2. User Input
    printf("enter the value of temperature(celsius):\t");
    scanf(" %f",&tempInCelsius);

    // 3. Logic Calculation
    tempInFahrenheit=(((float)tempInCelsius*9/5)+32);

    // 4. Output Result
    printf("Temperature in fehrenheit: %.2f f",tempInFahrenheit);

    return 0;
}

/*
===============================================================================
Output:
===============================================================================
enter the value of temperature(celsius):        45
Temperature in fehrenheit: 113.00 f

*/