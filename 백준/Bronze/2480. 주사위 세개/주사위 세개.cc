#include <stdio.h>

int main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	int price = 0;
	if (a == b) {
		if (b == c) { // 세 수가 같다면
			price = 10000 + a * 1000;
		}
		else { // 두 수가 같다면
			price = 1000 + a * 100;
		}
	}
	else{
		if (b == c || a == c) { // 두 수가 같다면
			price = 1000 + c * 100;
		}
		else {
			int temp;
			if (a > b && a > c) {
				temp = a;
			}
			else if (b > a && b > c) {
				temp = b;
			}
			else {
				temp = c;
			}
			price = temp * 100;
		}
	}

	printf("%d", price);

	return 0;
}