#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
	long data;
	struct stack* next;
}stack;

stack* head = NULL;

stack* creatStack(long data) {
	stack* newStack = (stack*)malloc(sizeof(stack));
	newStack->data = data;
	if (head != NULL) {
		newStack->next = head;
	}
	else {
		newStack->next = NULL;
	}
	head = newStack;
	return newStack;
}

int main() {
	long n, data, sum = 0;
	scanf("%ld", &n);
	for (int i = 0; i < n; i++) {
		scanf("%ld", &data);
		if (data) {
			creatStack(data);
			sum += data;
		}
		else { // 0을 입력받았을 때
			sum -= head->data;
			if (head->next != NULL) {
				head = head->next;
			}
			else {
				head = NULL;
			}
		}
	}
	printf("%ld", sum);
	while (head != NULL) {
		stack* temp = head;
		head = head->next;
		free(temp);
	}
}