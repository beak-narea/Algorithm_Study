#include <stdio.h>

int main() {
	int bowl[100] = { 0 };
	int n, m, x, y, ball;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &x, &y, &ball);
		for (int j = x-1; j < y; j++) {
			bowl[j] = ball;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", bowl[i]);
	}

	return 0;
}