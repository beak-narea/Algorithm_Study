#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

Node* tail;
Node* head;

int main() {
	int n, k, size = 0;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++, size++) {
		Node* newNode = (Node*)malloc(sizeof(Node));
		newNode->data = i;
		if (head == NULL) { // 첫 데이터
			head = newNode;
		}
		else {
			tail->next = newNode;
		}
		newNode->next = head;
		tail = newNode;
	}
	Node* temp;
	Node* temp2;
	temp = tail;
	printf("<");
	while (size) {
		for (int i = 0; i < k; i++) {
			temp2 = temp;
			temp = temp->next;
		}
		if (size - 1) {
			printf("%d, ", temp->data);
		}
		else {
			printf("%d", temp->data);
		}
		temp2->next = temp->next;
		free(temp);
		temp = temp2;
		size--;
	}
	printf(">");
	return 0;
}