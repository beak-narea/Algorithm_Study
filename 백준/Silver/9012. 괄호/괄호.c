#include <stdio.h>



int main() {
	int n, top = -1;
	char stack[51];
	char arr[51];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		top = -1;

		scanf("%s", arr);

		for (int j = 0; arr[j] != '\0'; j++) { // 문자 하나씩 확인
			if (arr[j] == '(') {
				stack[++top] = arr[j];
			}
			else {
				if (top != -1)
					top--;
				else {
					top = 100;
					break;
				}
					
			}
		}

		printf("%s\n", top == -1 ? "YES" : "NO");
	}
	return 0;
}