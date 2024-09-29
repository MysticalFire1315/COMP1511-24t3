// part2_2d_while_loops.c
//
// This program was writtn by Sofia De Bellis (z5418801)
// on Febuarary 2024
//
// This program is a simple deonstration of a 2D while loop 

#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

int main(void) {
    printf("Start of outer loop!\n");
    int row = 0;
    int col = 0;

    while (row < MAX_ROW) {
        printf("Start of inner loop!\n");
        col = 0;

        while (col < MAX_COL) {
            printf("Col is %d\n", col);
            col++;
        }

        printf("End of inner loop!\n");
        row++;
    }

    printf("End of outer loop!\n");

    printf("Row is %d and Col is %d\n", row, col);

    return 0;
}
