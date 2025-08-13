#include <stdio.h>

int main() {
	char str[31] = { 0 };
	char stack[31];
	int result = 0, mul = 1;
	int top = -1;
	scanf("%s", str);

	for (int i = 0; str[i] != 0; i++) {
		if (str[i] == '(') {
			mul *= 2;
			stack[++top] = '(';
		}
		else if (str[i] == '[') {
			mul *= 3;
			stack[++top] = '[';
		}
		else if (str[i] == ')') {
			if (stack[top] != '(') {
				top = 100;
				break;
			}
			top--;
			if (str[i - 1] == '(' || str[i - 1] == '[') {
				result += mul;
			}
			mul /= 2;
		}
		else if (str[i] == ']') {
			if (stack[top] != '[') {
				top = 100;
				break;
			}
			top--;
			if (str[i - 1] == '(' || str[i - 1] == '[') {
				result += mul;
			}
			mul /= 3;
		}
		// printf("result: %d, multipul: %d\n", result, mul);
	}
	if (top == -1) {
		printf("%d", result);
	}
	else {
		printf("0");
	}
	return 0;
}