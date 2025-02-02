#include <stdio.h>


int main() {
	int num, min_i, temp, sum = 0;
	int arr[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num);
		sum += num;
		arr[i] = num;
	}

	for (int i = 0; i < 5; i++) {
		min_i = i;
		for (int j = i; j < 5; j++) {
			if (arr[j] < arr[min_i]) {
				min_i = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min_i];
		arr[min_i] = temp;
	}
	printf("%d\n", sum / 5);
	printf("%d", arr[2]);
	return 0;
}