#include <stdio.h>

int main() {
	int n, m, x, y;
	int arr[100];
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		for (int j = x, k = y; (k > j) && (k-j != 0); j++, k--) {
			int temp = arr[j];
			arr[j] = arr[k];
			arr[k] = temp;
		}
	}
	for (int i = 1; i <= n; i++)
		printf("%d ", arr[i]);

	return 0;
}