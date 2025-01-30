#include <stdio.h>

int main() {
	int arr[3] = { 0 };
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	for (int i = 2; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("%d %d %d", arr[0], arr[1], arr[2]);
	return 0;
}