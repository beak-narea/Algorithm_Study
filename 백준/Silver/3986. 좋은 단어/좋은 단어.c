#include <stdio.h>
#define max 1000000

char stack[max];
char arr[max];

int main() {
	int n, count = 0, top = -1;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		top = -1;

		scanf("%s", arr);

		for (int j = 0; arr[j] != '\0'; j++) { // 문자 하나씩 확인
			if (top == -1 || stack[top] != arr[j]) {
				stack[++top] = arr[j];
			}
			else {
				top--;
			}
		}

		if (top == -1) { // 짝이 맞는지 확인
			count++;
		}
	}
	
	printf("%d", count);
	return 0;
}