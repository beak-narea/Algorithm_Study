#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
	int data;
	int index;
}stack;
stack arr[500001];
int main() {
	int n, data, top = -1;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf(" %d", &data);
		while (top >= 0 && arr[top].data < data) {
			top--;
		}
		if (top == -1) {
			printf("0 ");
		}
		else {
			printf("%d ", arr[top].index);
		}
		arr[++top].data = data;
		arr[top].index = i+1;
	}

	return 0;
}