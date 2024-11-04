#include <stdio.h>

int main(void) {
    char letter = 'a';
    int size_of_char = sizeof(letter);

    printf("sizeof(char) = %d\n", size_of_char);

    return 0;
}