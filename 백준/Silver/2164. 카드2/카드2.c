#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}Node;

Node* head = NULL;
Node* tail = NULL;

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		Node* newNode = (Node*)malloc(sizeof(Node));
		newNode->data = i;
		newNode->next = NULL;
		if (head == NULL) {
			head = newNode;
		}
		else {
			tail->next = newNode;
		}
		tail = newNode;
	}
	while (head != tail) {
		Node* temp = head;
		head = head->next;
		free(temp); // pop

		tail->next = head;
		head = head->next;
		tail = tail->next;
	}
	printf("%d", head->data);
	return 0;
}