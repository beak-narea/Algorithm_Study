#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int arr[1000000];
int size = 0;

void pop() {
	if (!is_empty()) {
		printf("%d\n", arr[size-1]);
		size--;
	}
	else {
		printf("-1\n");
	}
}

void push(int data) {
	arr[size] = data;
	size++;
}

int is_size() {
	return size;
}

void top() {
	if (!is_empty()) {
		printf("%d\n", arr[size-1]);
	}
	else {
		printf("-1\n");
	}
}

int is_empty() {
	if (is_size()) {
		return 0;
	}
	else { // 비었음
		return 1;
	}
}

int main() {
	int n, data;
	char command[10] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", command);
		if (!strcmp(command, "pop")) {
			pop();
		}
		else if (!strcmp(command, "push")) {
			scanf("%d", &data);
			push(data);
		}
		else if (!strcmp(command, "size")) {
			printf("%d\n", is_size());
		}
		else if (!strcmp(command, "top")) {
			top();
		}
		else if (!strcmp(command, "empty")) {
			printf("%d\n", is_empty());
		}
	}
}