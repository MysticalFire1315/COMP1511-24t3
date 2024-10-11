# COMP1511 Tutorial 05

## 2D Arrays

- An array variable where each element is another array
- Can be thought of as a grid, where the first index corresponds to the row

```c
// Array of 5 integers, explicitly initialized
int array[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
// Represented as a grid like so:
// 1  2  3  4
// 5  6  7  8
// 9 10 11 12
```

## Strings

- A string is just an array of characters
- Must always end with a null terminator (`\0`)

```c
char string1[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

// Printing method 1
int i = 0;
while (string1[i] != '\0') {
    printf("%c", string1[i);
    i++;
}

// Printing method 2
printf("%s", string);

// Printing method 3
fputs(string, stdout);


string[2] = '\0';
printf("%s", string); // prints "he"
```
