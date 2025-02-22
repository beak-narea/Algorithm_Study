#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
	int data;
	int index;
}Node;
int arr[1000001] = { 0 };
Node stack[1000001];
int main() {
	int n, data, top = -1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &data);
		while (top >= 0 && data > stack[top].data) {
			arr[stack[top].index] = data;
			top--;
		}
		stack[++top].data = data;
		stack[top].index = i;
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			printf("-1 ");
		}
		else {
			printf("%d ", arr[i]);
		}
	}
	return 0;
}