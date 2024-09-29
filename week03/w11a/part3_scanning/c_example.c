#include <stdio.h>

int main(void) {
    // Scan for numbers until end of input and display
    // all even numbers entered.
    int num = 0;
    int num2 = 0;

    int scanf_return = scanf("%d", &num);
    while (scanf_return == 1) {
        printf("Scanf returned %d\n", scanf_return);
        scanf_return = scanf("%d", &num);
    }


    return 0;
}
