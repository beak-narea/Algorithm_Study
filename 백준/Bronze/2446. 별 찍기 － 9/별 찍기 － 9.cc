#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int k = 1;
	for (int i = 1; i > 0; i += k) {
		for (int j = 1; j < i; j++)printf(" ");
		for (int j = (n-i)*2+1; j > 0; j--)printf("*");
		
		if (i == n)k *= -1;
		printf("\n");
	}
	return 0;
}