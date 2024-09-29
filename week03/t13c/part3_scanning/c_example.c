#include <stdio.h>

int main(void) {
    // Scan for numbers until end of input and display
    // all even numbers entered.

    int a;

    int scanf_return = scanf("%d", &a);
    while (scanf_return == 1) {
        if (a % 2 == 0) {
            printf("%d\n", a);
        }
        scanf_return = scanf("%d", &a);
    }

    printf("Scanf returned %d\n", scanf_return);

    return 0;
}
