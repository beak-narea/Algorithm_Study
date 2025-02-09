#include <stdio.h>

int main() {
	int a, b, c;
	int arr[10] = { 0 };
;	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	int num = a * b * c;
	while ((double)num / 10 > 0) {
		arr[num % 10]++;
		num /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}