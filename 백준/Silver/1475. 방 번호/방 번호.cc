#include <stdio.h>

int main() {
	int a, max_index = 0;
	int arr[10] = { 0 };
	scanf("%d", &a);
	while (a) {
		int num = a % 10;
		if (num == 6 || num == 9) {
			num = arr[6] > arr[9] ? 9 : 6;
		}
		arr[num]++;
		if (arr[max_index] < arr[num]) {
			max_index = num;
		}
		a /= 10;
	}
	printf("%d", arr[max_index]);
	return 0;
}