#include <stdio.h>

int main() {
	int top = 0, count = 0;

	char arr[100000];
	scanf("%s", arr);
	for (int i = 0; ; i++) {
		
		if (arr[i] == '(') {
			if (arr[i + 1] != NULL && arr[i + 1] == ')') { // 자름
				count += top;
				i++;
			}
			else {
				top++;
			}
		}
		else if (arr[i] == ')') {
			top--;
			count++;
		}
		else {
			break;
		}
	}
	printf("%d", count);

	return 0;
}