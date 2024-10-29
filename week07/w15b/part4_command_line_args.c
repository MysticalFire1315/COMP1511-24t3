#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // argc = number of arguments (including program name)
    printf("argc = %d\n", argc);

    printf("Program name = %s\n", argv[0]);

    // loop to print arguments
    int i = 1;
    // int sum = 0;
    while (i < argc) {
        printf("%s\n", argv[i]);
        // atoi -> converts a string into an integer
        // sum += atoi(argv[i]);
        i++;
    }

    // printf("Sum is %d\n", sum);

    return 0;
}
