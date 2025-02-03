#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main() {
	int arr[9] = { 0 };
	int answer[7] = { 0 };
	int sum = 0, ck = 1, i, j, num1, num2;

	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	sum -= 100;

	for (i = 0; i < 9 && ck; i++) {
		for (j = i + 1; j < 9; j++) {
			if ((arr[i] + arr[j]) == sum) {
				num1 = i;
				num2 = j;
				ck = 0;
				break;
			}
		}
	}
	for (i = 0, j = 0; i < 7; i++, j++) {
		if (j == num1 || j == num2) {
			j++;
			if (j == num2) {
				j++;
			}
		}
		answer[i] = arr[j];
	}
	int n = sizeof(answer) / sizeof(answer[0]);
	qsort(answer, n, sizeof(int), compare);
	for (i = 0; i < 7; i++) {
		printf("%d\n", answer[i]);
	}
	return 0;
}