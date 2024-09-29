#include <stdio.h>

int main(void) {
    // Enter a series of integers until you reach
    // a negative number. Then, stop and calculate the sum.
    int sum = 0;

    int number = 0;
    scanf("%d", &number);
    while (number >= 0) {
        sum += number;
        scanf("%d", &number);
    }

    printf("The sum is %d\n", sum);

    return 0;
}
