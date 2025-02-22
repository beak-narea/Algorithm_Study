#include <stdio.h>

long stack[800001] = { 0 };
int main() {
	int n,top = -1;
	long long data, count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%ld", &data);
		while (top >= 0 && stack[top] <= data) {
			top--;
		}
		stack[++top] = data;
		count += top;
	}
	printf("%lld", count);
	return 0;
}