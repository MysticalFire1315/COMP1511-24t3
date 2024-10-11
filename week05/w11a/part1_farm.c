// Farmer's Farm
// part1_farm.c
//
// This program was written by YOUR-NAME-HERE (zXXXXXXX)
// on INSERT-DATE-HERE
//
// This program is a simple game that allows the user to build a farm.
// The user can place barns, trees, and coops in the farm.

#include <stdio.h>

#define SIZE 5
#define TREE_POINTS -10

enum entity_type {
    COOP,
    BARN,
    TREE,
    FARMER,
    EMPTY,
};

struct farm_entity {
    enum entity_type entity;
    int points;
};

void print_farm(struct farm_entity farm[SIZE][SIZE]);

int main(void) {
    struct farm_entity farm[SIZE][SIZE];

    // TODO: Initialise the farm
    int outer = 0;
    while (outer < SIZE) {
        int inner = 0;
        while (inner < SIZE) {
            farm[outer][inner].entity = EMPTY;
            farm[outer][inner].points = 0;
            inner++;
        }
        outer++;
    }

    // TODO: Place the barns and trees in the farm
    printf("Enter barns and trees:\n");
    char input;
    scanf("%c", &input);
    while (input != 'q') {
        if (input == 'b') {
            // barn
            int row;
            int col;
            int points;
            scanf("%d %d %d", &row, &col, &points);
            printf("Barn scanned\n");
            farm[row][col].entity = BARN;
            farm[row][col].points = points;
        } else if (input == 't') {
            // tree
            int row;
            int col;
            scanf("%d %d", &row, &col);
            printf("Tree scanned\n");
            farm[row][col].entity = TREE;
        }

        scanf("%c", &input);
    }

    // TODO: Place the farmer in the farm
    printf("Enter the starting position of the farmer: ");
    int row;
    int col;
    scanf("%d %d", &row, &col);
    while (farm[row][col].entity != EMPTY) {
        printf("Invalid starting position");
        scanf("%d %d", &row, &col);
    }
    farm[row][col].entity = FARMER;

    // TODO: Place the coops in the farm
    printf("Enter the position and points of the coop(s):\n");
    row = 0;
    col = 0;
    int points;
    while (scanf("%d %d %d", &row, &col, &points) == 3) {
        farm[row][col].entity = COOP;
        farm[row][col].points = points;
    }

    // TODO: Print the farm
    print_farm(farm);

    int sum = 0;
    row = 0;
    while (row < SIZE) {
        col = 0;
        while (col < SIZE) {
            sum += farm[row][col].points;
            col++;
        }
        row++;
    }

    printf("Total points: %d\n", sum);

    return 0;
}

// Function prints the map of the farm
//
// Parameters:
// - farm: the 2D array representing the farm
//
// returns: nothing
void print_farm(struct farm_entity farm[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (farm[i][j].entity == FARMER) {
                printf(" X ");
            } else if (farm[i][j].entity == EMPTY) {
                printf("   ");
            } else if (farm[i][j].entity == COOP) {
                printf(" o ");
            } else if (farm[i][j].entity == BARN) {
                printf(" # ");
            } else if (farm[i][j].entity == TREE) {
                printf(" T ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}