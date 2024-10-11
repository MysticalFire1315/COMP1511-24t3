#include <stdio.h>

#define SIZE 6

int main(void) {
    char string[SIZE] = {'h', 'e', 'l', 'l', 'o', '\0'};

    // Method 1
    int i = 0;
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }

    // Method 2
    printf("The string is: %s", string);

    // Method 3
    printf("The string is: ");
    fputs(string, stdout);

    return 0;
}