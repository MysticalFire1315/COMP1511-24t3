#include <stdio.h>

#define SIZE 8

int main(void) {
    char array[SIZE] = {'Z', 'B', 'c', 'z', 'e', 'f', 'g'};
    char largest_character = array[0];

    int i = 0;
    while (i < SIZE) {
        if (array[i] > largest_character) {
            largest_character = array[i];
        }
        i++;
    }

    printf("Largest character is %c\n", largest_character);

    return 0;
}