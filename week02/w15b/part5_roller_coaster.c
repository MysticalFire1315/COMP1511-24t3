// part5_roller_coaster
//
// This program was written by YOUR-NAME, ZID
// on [DATE]
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less, 
//    it should print an error message
//
// 3. If the height is below the minimum height, 
//    it should print a message telling the user they are not tall enough to ride
// 
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold, 
//    it should print a message telling the user they can ride.

#include <stdio.h>

int main(void) {
    int height = 5;

    if (height < 0) {
        printf("Invalid height\n");
    } else if (height < 100) {
        // checking height >= 0 is redundant since this condition will
        // only be checked if (height < 0) is false
        printf("You are not tall enough to ride\n");
    }
    return 0;
}
