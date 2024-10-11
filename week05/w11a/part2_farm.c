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
void initialise_farm(struct farm_entity farm[SIZE][SIZE]);
void scan_barns_and_trees(struct farm_entity farm[SIZE][SIZE]);
void scan_barn(struct farm_entity farm[SIZE][SIZE]);
void scan_tree(struct farm_entity farm[SIZE][SIZE]);
int total_points(struct farm_entity farm[SIZE][SIZE]);

int main(void) {
    struct farm_entity farm[SIZE][SIZE];

    // TODO: Initialise the farm
    initialise_farm(farm);

    // TODO: Place the barns and trees in the farm
    scan_barns_and_trees(farm);

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

    int sum = total_points(farm);

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

void initialise_farm(struct farm_entity farm[SIZE][SIZE]) {
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
}

void scan_barns_and_trees(struct farm_entity farm[SIZE][SIZE]) {
    printf("Enter barns and trees:\n");
    char input;
    scanf("%c", &input);
    while (input != 'q') {
        if (input == 'b') {
            scan_barn(farm);
        } else if (input == 't') {
            scan_tree(farm);
        }

        scanf("%c", &input);
    }
}

void scan_barn(struct farm_entity farm[SIZE][SIZE]) {
    int row;
    int col;
    int points;
    scanf("%d %d %d", &row, &col, &points);
    printf("Barn scanned\n");
    farm[row][col].entity = BARN;
    farm[row][col].points = points;
}

void scan_tree(struct farm_entity farm[SIZE][SIZE]) {
    int row;
    int col;
    scanf("%d %d", &row, &col);
    printf("Tree scanned\n");
    farm[row][col].entity = TREE;
}

int total_points(struct farm_entity farm[SIZE][SIZE]) {
    int sum = 0;
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            sum += farm[row][col].points;
            col++;
        }
        row++;
    }
    return sum;
}