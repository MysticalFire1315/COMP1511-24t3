// Farmer's Farm
// part1_farm.c
//
// This program was written by Ibrahim Ghoneim (z5470570)
// on 05-09-2024
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

    // Initialise the farm
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            farm[i][j].entity = EMPTY;
            farm[i][j].points = 0;
        }
    }

    // Place the barns and trees in the farm
    printf("Enter barns and trees:\n");
    int points;
    char type;
    scanf(" %c", &type);
    
    int row, col;
    while (type != 'q') {
        scanf(" %d %d", &row, &col);
        if (type == 'b') {
            scanf("%d", &points);
            farm[row][col].entity = BARN;
            farm[row][col].points = points;
        } else if (type == 't') {
            farm[row][col].entity = TREE;
            farm[row][col].points = TREE_POINTS;
        }
        scanf(" %c", &type);
    }

    // Place the farmer in the farm
    printf("Enter the starting position of the farmer: ");
    scanf("%d %d", &row, &col);
    while (row < 0 || row >= SIZE || col < 0 || col >= SIZE ||
           farm[row][col].entity != EMPTY) {
        printf("Invalid starting position!\n");
        printf("Re-enter starting position: ");
        scanf("%d %d", &row, &col);
    }
    farm[row][col].entity = FARMER;
    farm[row][col].points = 0;

    // Place the coops in the farm
    printf("Enter the position and points of the coop(s):\n");
    while (scanf("%d %d %d", &row, &col, &points) == 3) {
        farm[row][col].entity = COOP;
        farm[row][col].points = points;
    }

    // Print the farm
    print_farm(farm);

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