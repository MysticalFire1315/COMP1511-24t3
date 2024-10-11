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

    // TODO: Place the barns and trees in the farm
    printf("Enter barns and trees:\n");

    // TODO: Place the farmer in the farm
    printf("Enter the starting position of the farmer: ");

    // TODO: Place the coops in the farm
    printf("Enter the position and points of the coop(s):\n");

    // TODO: Print the farm

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