/*
===============================================================================
 PRACTICE QUESTION 3: AREA OF A CIRCLE
===============================================================================
PROBLEM STATEMENT:
Write a C program to calculate and display the area of circle using it's diameter
(Formulas: Area=pi*r*r , Redius r=diameter(D)/2 )

KEY CONCEPT COVERED:
-Floating-point Variable (Float)
-Basic Multiplication (*) and division (/)
-Output Formating With Decimal Precision (%.2f)
*/

#include<stdio.h>

int main(){

        //1. Variable Declaration and Initialization
        float diameter=4;
        float redius,area;

        //2.logic redius=diameter/2 & Area of Circle =pi*redius*redius pi=3.14
        redius=diameter/2;
        area=3.14*redius*redius;

        //3.Output Result
        printf("---Result---\n");
        printf("Diameter of Circle: %.2f meter\n",diameter);
        printf("Redius of Circle: %.2f meter\n",redius);
        printf("Area of Circle: %.2f meter^2\n",area);

    return 0;
}
/*
===========================================================================
EXPECTED OUTPUT:
===========================================================================
--- RESULT ---
Diameter of Circle: 4 meter
Redius of Circle: 2 meter
Area of Circle: 12.56 meter^2
*/