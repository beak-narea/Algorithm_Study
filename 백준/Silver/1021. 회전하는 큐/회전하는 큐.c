#include <stdio.h>
int arr[1276];
int main() {
	int n, m, index, front = 0, tail, total_count = 0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		arr[i] = i+1;
 	}
	tail = n;
	for (int i = 0; i < m; i++) {
		scanf("%d", &index);
		int right_count = 0;
		while (index != arr[front]) {
			right_count++;
			arr[tail++] = arr[front++];
		}
		total_count += right_count > n - right_count ? n - right_count : right_count;
		front++, n--;
	}
	printf("%d", total_count);
	return 0;
}