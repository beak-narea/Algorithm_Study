#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	char data;
	struct Node* R;
	struct Node* L;
}Node;

Node* head = NULL;
Node* tail = NULL;
Node* cursor = NULL;

Node* createNode(char data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->L = NULL;
	newNode->R = NULL;
	return newNode;
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		char arr[1000000] = { 0 };
		scanf("%s", arr);
		head = NULL;
		tail = NULL;
		cursor = NULL;
		for (int j = 0; arr[j] != 0; j++) {
			if (arr[j] == '<') {
				if (cursor != head) {
					if (cursor == NULL) {
						cursor = tail;
					}
					else {
						cursor = cursor->L;
					}
				}
			}
			else if (arr[j] == '>') {
				if (cursor != NULL) {
					cursor = cursor->R;
				}
			}
			else if (arr[j] == '-') {
				if (cursor == NULL) {
    if (tail != NULL && tail->L != NULL) { // tail이 NULL이 아닌지 먼저 체크
        tail = tail->L;
        tail->R = NULL;
    } else {
        head = NULL;
        tail = NULL;
        cursor = NULL;
    }
}

				else if (cursor != head && cursor != NULL) {
					Node* temp = cursor->L;
					if (temp->L != NULL) {
						temp->L->R = cursor;
					}
					else {
						head = cursor;
					}
					cursor->L = temp->L;
					free(temp);
				}
			}
			else {
				Node* newNode = createNode(arr[j]);
				if (cursor == head || head == NULL) { // 맨 앞에 삽입하는 경우
					if (head == NULL) {
						head = newNode;
						tail = newNode;
					}
					else {
						newNode->R = head;
						head->L = newNode;
						head = newNode;
					}
				}
				else if(cursor == NULL){ // 맨끝에 추가
					newNode->L = tail;
					tail->R = newNode;
					tail = newNode;
				}
				else {
					newNode->L = cursor->L;
					newNode->R = cursor;
					cursor->L->R = newNode;
					cursor->L = newNode;
				}
			}
		}
		// 연결 리스트 출력
		Node* cur = head;
		while (cur != NULL) {
			printf("%c", cur->data);
			cur = cur->R;
		}
		printf("\n");
		// 메모리 해제
		while (head != NULL) {
			Node* temp = head;
			head = head->L;
			free(temp);
		}
	}

	return 0;
}