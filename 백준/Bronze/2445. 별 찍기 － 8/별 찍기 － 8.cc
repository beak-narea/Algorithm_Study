#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i < n + 1; i++) {
		for (int j = 0; j < n; j++) {
			if (j >= i) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}

		for (int j = n; j > 0; j--) {
			if (j > i) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	for (int i = 1; i < n; i++) {
		for (int j = n; j > 0; j--) {
			if (j > i) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		for (int j = 1; j <= n; j++) {
			if (j > i) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}