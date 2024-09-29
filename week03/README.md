# COMP1511 Tutorial 03

## While Loops

- Condition is checked before and after each execution
  of the loop body
- Condition should contain at least 1 variable, which
  changes within the loop body

```c
while (/* some condition is true */) {
    // loop body
    // execute some code
}
```

### Examples

```c
// Count loop
int counter = 0;
while (counter < MAX) {
    // Do something here
    counter++; // increment counter

    // Other ways to increment counter
    // counter = counter + 1;
    // counter += 1;
}

// Conditional/Sentinal loop
char answer = 'n';
while (answer != 'y') {
    // Do something here
    scanf(" %c", &answer); // update value of answer
}
```

## 2D While Loop

- Just a while loop where its body contains another loop

```c
int row = 0;
int col = 0;

while (row < MAX_ROW) {
    col = 0;
    while (col < MAX_COL) {
        print("Inner loop running, col = %d\n", col);
        col++;
    }
    printf("Outer loop running, row = %d\n", row);
    row++;
}
```

## Structs

- `struct` is short for structure, which is a user-defined
  data type allowing variables of different data types to be
  grouped under a single name
- When initializing a `struct`, all its fields must also be
  initialized

```c
struct coffee {
    enum coffee_type type;
    double num_sugars;
    char size;
};
```

## Enums

- `enum` is short for enumeration, which is a user-defined
  data type allowing a set of named constants to be grouped
  together
- Default value starts at 0 and increases by 1
- Values can also be specified

```c
enum coffee_type {
    LATTE,          // value = 0
    CAPPUCCINO,     // value = 1
    ESPRESSO,       // value = 2
    AMERICANO,      // value = 3
    MATCHA = 5      // value = 5
};
```

## `scanf` in a loop

- Return value of `scanf` tells how many variables were successfully scanned
- `Ctrl+D` means "end of input", so any remaining `scanf` in the code doesn't scan
- `scanf` will continue scanning from where it previously stopped
- This means you can give input to multiple `scanf` calls on the same line
- See below for an example program

```c
// THE CODE (Assume its in a file called `scanf.c`)
char letter1 = '\0';
int scanf_return = scanf(" %c %c", &letter);
printf("Scanned %d characters: %c\n", scanf_return, letter);
scanf_return = scanf(" %c", &letter);
printf("Scanned %d characters: %c\n", scanf_return, letter);

// EXAMPLE RUNTIME 1
> ./scanf
a
Scanned 1 characters a
b
Scanned 1 characters b

// EXAMPLE RUNTIME 2
> ./scanf
ab
Scanned 1 characters a
Scanned 1 characters b

// EXAMPLE RUNTIME 3
> ./scanf
a
Scanned 1 characters a
[CTRL+D]
Scanned 0 characters a
```
