// part1_variables
//
// This program was written by YOUR-NAME (ZID),
// on [DATE]
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.141

int main(void) {
    // 1. Declare the variables
    int radius;

    // 2. Initalise the variables
    scanf("%d", &radius);

    // Declare and initialize
    // int radius = 1;

    // 3. Calculate the area of the circle
    double area = radius * radius * PI;
    double diameter = 2 * radius * PI;

    // 4. Print the result
    printf("The area of a circle with radius %d is %.3lf\n", radius, area);
    printf("The diameter of a circle with radius %d is %.3lf\n", radius, diameter);

    return 0;
}
