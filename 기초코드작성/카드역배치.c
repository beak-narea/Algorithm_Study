#include <stdio.h>

int main() {
	int arr[20] = { 0 };
	int a, b;
	for (int i = 1; i <= 20; i++) {
		arr[i - 1] = i;
	}

	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &a, &b); // a부터 b까지 역순으로 바꿈
		a -= 1;
		b -= 1;
		while (a < b) {
			int temp = arr[a];
			arr[a] = arr[b];
			arr[b] = temp;
			a++, b--;
		}
		for (int i = 0; i < 20; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}

	

	return 0;
}