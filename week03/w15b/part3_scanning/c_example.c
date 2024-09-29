#include <stdio.h>

int main(void) {
    // Scan for numbers until end of input and display
    // all even numbers entered.
    int num = 1;
    int num1 = 1;
    int scanf_return = scanf("%d %d", &num, &num1);
    while (scanf_return == 2) {
        printf("Return value of scanf is %d\n", scanf_return);
        scanf_return = scanf("%d %d", &num, &num1); 
    }


    return 0;
}
