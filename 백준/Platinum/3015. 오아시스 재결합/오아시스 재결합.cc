#include <stdio.h>

typedef struct {
    long long height;
    int count;
} Stack;

Stack stack[500000];
int top = -1;

int main() {
    int n;
    long long count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        long long data;
        scanf("%lld", &data);

        int sameCount = 1;
        while (top >= 0 && stack[top].height <= data) {
            count += stack[top].count;
            if (stack[top].height == data) {
                sameCount = stack[top].count + 1;
            }
            top--;
        }

        if (top >= 0) {
            count++;  // 마지막 남은 사람과도 한 쌍을 만들 수 있음
        }

        stack[++top].height = data;
        stack[top].count = sameCount;
    }

    printf("%lld\n", count);
    return 0;
}
