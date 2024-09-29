// part1_while_loops.c
//
// Written by YOUR-NAME (zID), 
// on TODAYS-DATE
//
// This program is a simple demonstration of a count loop in c


#include <stdio.h>

int main(void) {
    // TODO: Write your solution here
    printf("Start of loop!\n");

    int x = 0;

    while (x < 10) {
        printf("%d\n", x);
        // x = x + 1;
        // x += 1;
        x++;
    }

    printf("End of loop!\n");

    return 0;
}
