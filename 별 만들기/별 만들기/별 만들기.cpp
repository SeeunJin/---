#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	for (a = 1; a < 5; a++) {
		for (b = 0; b < 5 - a; b++) { printf(" "); }
		for (b = 0; b < 2 * a - 1; b++) { printf("*"); }
		printf("\n");
	}
	for (a = 4; a > 0; a--) {
		for (b = 0; b < 5 - a; b++) { printf(" "); }
		for (b = 0; b < 2 * a - 1; b++) { printf("*"); }
		printf("\n");
	}
	return 0;
}