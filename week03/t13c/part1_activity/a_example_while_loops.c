#include <stdio.h>

int main(void) {
    int i = 0;
    while (i < 32) {
        printf("%d\n", i);
        i = i + 2;
    }
	return 0;
}

// 0
// 2
// 4
// ...
// 28
// 30
