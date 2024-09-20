// part1_variables
//
// This program was written by YOUR-NAME (ZID),
// on [DATE]
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.1415

int main(void) {
    // 1. Declare the variables
    int radius = 0;

    // 2. Initalise the variables
    scanf("%d", &radius);

    // Declare and initialize
    // double number = 1;

    // 3. Calculate the area of the circle
    double area = PI * radius * radius;

    // 4. Print the result
    printf("The area of a circle with radius %d is %.2lf\n", radius, area);

    return 0;
}
