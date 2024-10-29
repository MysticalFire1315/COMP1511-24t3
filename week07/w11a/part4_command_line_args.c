#include <stdio.h>
#include <stdlib.h>

// argc -> number of arguments
// argv -> the values of the arguments
int main(int argc, char *argv[]) {
    printf("Number of arguments is %d\n", argc);

    // loop to print arguments
    printf("Arguments:\n");
    int sum = 0;
    int i = 1;
    while (i < argc) {
        printf("%s\n", argv[i]);
        sum += atoi(argv[i]);
        i++;
    }

    printf("The total sum is %d\n", sum);
    return 0;
}
