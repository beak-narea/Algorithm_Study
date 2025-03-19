#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100000

int deque[MAX_SIZE];

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char command[100001];  // 명령어 저장
        int n, front = 0, back, reverse = 0, error = 0;
        scanf("%s", command);  // 명령어 입력
        scanf("%d", &n);  // 배열 크기 입력
        back = n - 1;  // 배열의 끝 위치

        // 배열 입력 처리
        char ch;
        scanf(" [");
        for (int i = 0; i < n; i++) {
            if (i == 0) scanf("%d", &deque[i]);
            else scanf(",%d", &deque[i]);
        }
        scanf("]");  // ']' 문자를 처리하여 입력 마무리

        // 명령어 처리
        for (int i = 0; command[i] != '\0'; i++) {
            if (command[i] == 'R') {
                reverse = !reverse;  // 뒤집히면 1, 안뒤집히면 0
            }
            else {  // 'D' 연산
                if (front > back) {
                    error = 1;
                    break;
                }
                if (!reverse) {
                    front++;  // 앞에서 삭제
                }
                else {
                    back--;  // 뒤에서 삭제
                }
            }
        }

        // 결과 출력
        if (error) {
            printf("error\n");
        }
        else {
            printf("[");
            if (front <= back) {
                if (!reverse) {
                    for (int i = front; i < back; i++) {
                        printf("%d,", deque[i]);
                    }
                    printf("%d", deque[back]);
                }
                else {
                    for (int i = back; i > front; i--) {
                        printf("%d,", deque[i]);
                    }
                    printf("%d", deque[front]);
                }
            }
            printf("]\n");
        }
    }
    return 0;
}
