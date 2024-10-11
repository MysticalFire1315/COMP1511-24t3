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
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            farm[row][col].entity = EMPTY;
            farm[row][col].points = 0;
            col++;
        }
        row++;
    }

    // TODO: Place the barns and trees in the farm
    printf("Enter barns and trees:\n");
    char input;
    scanf("%c", &input);
    while (input != 'q') {
        int row_input;
        int col_input;
        if (input == 'b') {
            // barn
            int points_input;
            scanf("%d %d %d", &row_input, &col_input, &points_input);
            farm[row_input][col_input].entity = BARN;
            farm[row_input][col_input].points = points_input;
        } else if (input == 't') {
            // tree
            scanf("%d %d", &row_input, &col_input);
            farm[row_input][col_input].entity = TREE;
            farm[row_input][col_input].points = TREE_POINTS;
        }

        scanf("%c", &input);
    }

    // TODO: Place the farmer in the farm
    // printf("Enter the starting position of the farmer: ");

    // TODO: Place the coops in the farm
    printf("Enter the position and points of the coop(s):\n");
    int row_input;
    int col_input;
    int points_input;
    while (scanf("%d %d %d", &row_input, &col_input, &points_input) == 3) {
        farm[row_input][col_input].entity = COOP;
        farm[row_input][col_input].points = points_input;
    }

    // TODO: Print the farm
    print_farm(farm);

    // Calculate sum of all points
    int sum = 0;
    row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            sum += farm[row][col].points;
            col++;
        }
        row++;
    }

    printf("The sum of all points is %d\n", sum);

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