#include <stdio.h>
#include <stdlib.h>

int main() {
    char buffer[1000000];  // 입력을 받을 버퍼
    int T, A, B;

    // 한 번에 입력받기 위해 fgets 사용
    fgets(buffer, sizeof(buffer), stdin);
    T = strtol(buffer, NULL, 10);  // 문자열을 정수로 변환

    char output[1000000];  // 결과 저장용 버퍼
    char* ptr = output;    // 버퍼 포인터

    for (int i = 0; i < T; i++) {
        fgets(buffer, sizeof(buffer), stdin);

        // strtol을 이용해 공백 기준으로 정수 변환
        char* p = buffer;
        A = strtol(p, &p, 10);  // 첫 번째 숫자
        B = strtol(p, NULL, 10);  // 두 번째 숫자

        // sprintf를 이용해 버퍼에 저장
        ptr += sprintf(ptr, "%d\n", A + B);
    }

    // 한 번에 출력
    fputs(output, stdout);

    return 0;
}
