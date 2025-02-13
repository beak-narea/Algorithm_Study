#include <stdio.h>
#include <stdbool.h>

int main() {
	int test, n, count;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		bool state[100] = { false };
		count = 0;
		scanf("%d", &n);
		for (int j = 1; j <= n; j++) {
			for (int k = j; k <= n; k++) {
				if (k % j == 0) {
					state[k-1] = !state[k-1];
				}
			}
		}
		for (int j = 0; j < n; j++) {
			if (state[j])
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}