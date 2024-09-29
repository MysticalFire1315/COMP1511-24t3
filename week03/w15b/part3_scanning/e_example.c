#include <stdio.h>

int main(void) {
	printf("How many numbers to scan? ");
	int num_to_scan = 0;
	scanf("%d", &num_to_scan);

	int sum = 0;
	int i = 0;
	while (i < num_to_scan) {
		int scanned = 0;
		scanf("%d", &scanned);
		sum += scanned;
		i++;
	}


	printf("The sum is %d\n", sum);
	return 0;
}
