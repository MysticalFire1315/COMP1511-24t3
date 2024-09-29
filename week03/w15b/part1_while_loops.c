    int scanf_return = scanf("%d", &num);// part1_while_loops.c
//
// Written by YOUR-NAME (zID), 
// on TODAYS-DATE
//
// This program is a simple demonstration of a count loop in c


#include <stdio.h>

int main(void) {
    // TODO: Write your solution here
    int num;
    scanf("%d", &num);

    int x = 0;
    // if (num > 0) {
        while (x <= num) {
            printf("%d\n", x);
            // x = x + 1;
            // x += 1;
            x++;
        }
    // }

    printf("Rest of code\n");

    return 0;
}
