#include <stdio.h>

int main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	int price = 0;
	if (a == b) {
		if (b == c) { // �� ���� ���ٸ�
			price = 10000 + a * 1000;
		}
		else { // �� ���� ���ٸ�
			price = 1000 + a * 10;
		}
	}
	else{
		if (b == c || a == c) { // �� ���� ���ٸ�
			price = 1000 + c * 10;
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