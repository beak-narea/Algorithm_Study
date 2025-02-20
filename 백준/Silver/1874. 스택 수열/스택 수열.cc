#include <stdio.h>

int arr[100000]; // 입력 배열
int stack[100000]; // 스택
char result[200000]; // 결과 문자열 저장

int main() {
    int n, num, top = -1, idx = 0, result_idx = 0;
    int current = 1; // 1부터 n까지 push할 값
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        num = arr[i]; // 목표 숫자
        
        while (current <= num) { // 목표 숫자까지 push
            stack[++top] = current++;
            result[result_idx++] = '+'; // push 연산
        }
        
        if (stack[top] == num) { // pop 가능한 경우
            top--;
            result[result_idx++] = '-'; // pop 연산
        } else {
            printf("NO\n");
            return 0; // 스택 수열이 불가능한 경우
        }
    }

    // 결과 출력
    for (int i = 0; i < result_idx; i++) {
        printf("%c\n", result[i]);
    }

    return 0;
}
