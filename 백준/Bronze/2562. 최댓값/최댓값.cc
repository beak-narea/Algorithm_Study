#include <stdio.h>

int main() {
	int arr[10] = { 0 };
	int max = 0, index = 0;
	for (int i = 1; i <= 9; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
	}
	printf("%d\n%d", max, index);
	
	return 0;
}