#include <stdio.h>
#include <string.h>

int main() {
	int n, data, size = 0, front = 0, tail = 0;
	char command[10];
	int arr[10001];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", command);
		if (!strcmp(command, "push")) {
			scanf("%d", &arr[tail++]);
			size++;
		}
		else if (!strcmp(command, "pop")) {
			printf("%d\n", size != 0 ? arr[front++] : -1);
			if(size!=0)
				size--;
		}
		else if (!strcmp(command, "size")) {
			printf("%d\n", size);
		}
		else if (!strcmp(command, "empty")) {
			printf("%d\n", size ? 0 : 1);
		}
		else if (!strcmp(command, "front")) {
			printf("%d\n", size != 0 ? arr[front] : -1);
		}
		else{
			printf("%d\n", size != 0 ? arr[tail-1] : -1);
		}
	}
	return 0;
}