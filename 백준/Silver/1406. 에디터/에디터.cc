#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	char data;
	struct Node* l;  // 왼쪽 (이전 노드)
	struct Node* r;  // 오른쪽 (다음 노드)
} Node;

Node* head = NULL;
Node* tail = NULL;
Node* cursor = NULL; // 커서

// 새로운 노드를 생성하는 함수
Node* createNode(char data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->l = NULL;
	newNode->r = NULL;
	return newNode;
}

int main() {
	char input[100001]; // 최대 100,000개의 문자
	int n;
	scanf("%s", input);

	// 초기 문자열을 이중 연결 리스트로 변환
	for (int i = 0; input[i] != '\0'; i++) {
		Node* newNode = createNode(input[i]);

		if (head == NULL) {
			head = newNode;
		}
		else {
			tail->r = newNode;
			newNode->l = tail;
		}
		tail = newNode;
	}

	// 커서를 맨 뒤에 위치
	cursor = NULL; // NULL == 맨 뒤 (tail의 오른쪽)

	scanf("%d", &n); // 명령어 개수 입력

	for (int i = 0; i < n; i++) {
		char command, ch;
		scanf(" %c", &command);

		if (command == 'L') { // 커서를 왼쪽으로 이동
			if (cursor != head) {
				if (cursor == NULL) {
					cursor = tail;
				}
				else {
					cursor = cursor->l;
				}
			}
		}
		else if (command == 'D') { // 커서를 오른쪽으로 이동
			if (cursor != NULL) {
				cursor = cursor->r;
			}
		}
		else if (command == 'B') { // 커서 왼쪽 문자 삭제
			if (cursor == NULL) {
				if (tail->l) {
					tail = tail->l;
					tail->r = NULL;
				}
				else {
					head = NULL;
					tail = NULL;
					cursor = NULL;
				}
			}
			else if (cursor != head && cursor != NULL) {
				Node* temp = cursor->l;
				if (temp->l) {
					temp->l->r = cursor;
				}
				else {
					head = cursor;
				}
				cursor->l = temp->l;
				free(temp);
			}
		}
		else if (command == 'P') { // 커서 왼쪽에 문자 추가
			scanf(" %c", &ch);
			Node* newNode = createNode(ch);

			if (cursor == head || head == NULL) { // 맨 앞에 삽입하는 경우
				if (head == NULL) {
					head = newNode;
					tail = newNode;
				}
				else {
					newNode->r = head;
					head->l = newNode;
					head = newNode;
				}
			}
			else if (cursor == NULL) { // 맨 끝에 삽입하는 경우
				tail->r = newNode;
				newNode->l = tail;
				tail = newNode;
			}
			else { // 중간에 삽입하는 경우
				newNode->l = cursor->l;
				newNode->r = cursor;
				cursor->l->r = newNode;
				cursor->l = newNode;
			}
		}
	}

	// 연결 리스트 출력
	Node* cur = head;
	while (cur != NULL) {
		printf("%c", cur->data);
		cur = cur->r;
	}

	// 메모리 해제
	while (head != NULL) {
		Node* temp = head;
		head = head->r;
		free(temp);
	}

	return 0;
}
