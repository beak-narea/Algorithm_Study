#include <stdio.h>
#define max 1000000

int main() {
    char arr[max];
    int count = 0; // 처음부터 0으로 시작해야 함
    scanf("%[^\n]", arr);

    // 빈 문자열 또는 공백만 입력된 경우 처리
    if ((arr[0] == ' ' && arr[1] == '\0') || arr[0] == '\0') {
        printf("0");
        return 0;
    }

    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] != ' ' && (i == 0 || arr[i - 1] == ' ')) {
            // 현재 문자가 공백이 아니고, 앞이 공백이거나 처음 시작이면 단어 시작
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
