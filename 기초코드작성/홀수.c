#include <stdio.h>

int main() {
	int num = 0, min = 0, sum = 0;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &num);

		if (num % 2 == 1) {
			if (min == 0 || num < min) {
				min = num;
			}
			sum += num;
		}
	}
	if (sum == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n%d", sum, min);
	}
	
	return 0;
}