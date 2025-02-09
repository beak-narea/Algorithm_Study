#include <stdio.h>

int arr[1000000] = { 0 };
int visited[1000000] = { 0 };

int main() {
	int n, result, count = 0;
	scanf("%d", &n);

	
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &result);

	
	for (int i = 0; i < n; i++) {
		int target = result - arr[i];
		if (target > 0 && visited[target]) {
			count++;
		}
		visited[arr[i]] = 1;
	}
	printf("%d", count);
	
	return 0;
}