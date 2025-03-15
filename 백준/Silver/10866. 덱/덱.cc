#include <stdio.h>
int arr[20001];
int main() {
	int n, size = 0, front = -1, back = -1;
	char command[10];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &command);
		if (command[0] == 's') { // size
			printf("%d\n", size);
		}
		else if (command[0] == 'e') { // empty
			printf("%d\n", size > 0 ? 0 : 1);
		}
		else if (command[0] == 'f') { // front
			printf("%d\n", size > 0 ? arr[front + 1] : -1);
		}
		else if (command[0] == 'b') { // back
			printf("%d\n", size > 0 ? arr[back - 1] : -1);
		}
		else if (command[5] == 'f') { // push_front
			if (front == -1) {
				front = 10000;
				back = 10001;
			}
			scanf(" %d", &arr[front--]);
			size++;
		}
		else if (command[5] == 'b') { // push_back
			if (back == -1) {
				back = 10000;
				front = 9999;
			}
			scanf(" %d", &arr[back++]);
			size++;
		}
		else if (command[4] == 'f') { // pop_front
			if (size > 0) {
				printf("%d\n", arr[++front]);
				size--;
			}
			else {
				printf("-1\n");
			}
		}
		else {
			if (size > 0) {
				printf("%d\n", arr[--back]);
				size--;
			}
			else {
				printf("-1\n");
			}
		}
	}
	return 0;
}