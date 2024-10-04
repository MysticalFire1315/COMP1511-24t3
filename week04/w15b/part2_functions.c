// functions.c
//
// Written by Sofia De Bellis (z5418801)
// on March 2024
//
// This program is a simple demonstration of functions

#include <stdio.h>

#define SIZE 4

// TODO: Function protoype
int my_sum(int a, int b);
int array_sum(int array[SIZE], int size);

struct person {
    int age;
    double height;
};

int main() {
    int result;
    int num1 = 5;
    int num2 = 3;
    int array[SIZE] = {1, 2, 3, 5};
    struct person array[SIZE];

    // TODO: Function call
    result = my_sum(num1, num2);
    result = array_sum(array, SIZE);

    printf("Result: %d\n", result);
    return 0;
}

// TODO: Function definition
int my_sum(int a, int b) {
    // function body
    int sum = a + b;
    a += 2;

    return sum;
}

int array_sum(int array[SIZE], int size) {
    int sum = array[0];
    int i = 1;
    while (i < size) {
        sum += array[i];
        i++;
    }
    
    return sum;
}
