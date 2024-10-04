#include <stdio.h>

#define SIZE_1 3
#define SIZE_2 10

int main(void) {
    double array[SIZE_1] = {0.1, 2.1, 3.5};
    double array_2[SIZE_2] = {0};

    int i = 0;
    while (i < SIZE_1) {
        array_2[i] = array[i];
        i++;
    }

    int j = 0;
    while (j < SIZE_2) {
        printf("%lf ", array_2[j]);
        j++;
    }

    printf("\n");

    return 0;
}