#include <stdio.h>

int main() {
	int n, k, s, y, count = 0;
	int arr[2][6] = { 0 };
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &s, &y);
		arr[s][y-1]++;
		if (arr[s][y-1] % k == 1) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}