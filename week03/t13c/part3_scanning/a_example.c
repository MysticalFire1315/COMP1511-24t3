#include <stdio.h>

int main(void) {
    // Enter a series of integers until you reach
    // a negative number. Then, stop and calculate the sum.

    int sum = 0;
    int scanned = 0;
    // scanf("%d", &scanned);
    while (!(scanned < 0)) {
        sum = sum + scanned;
        scanf("%d", &scanned);
        // sum += scanned;
    }

    printf("The sum is %d\n", sum);

    return 0;
}
