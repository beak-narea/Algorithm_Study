#include <stdio.h>
#include <string.h>

int main() {
    char arr[102];
    int ck = 1, top;

    while (1) {
        char stack[102];
        ck = 1, top = 0;
        fgets(arr, sizeof(arr), stdin);

        arr[strcspn(arr, "\n")] = '\0';

        if (strcmp(arr, ".") == 0) {
            break;
        }

        int size = 0;
        for (int i = 0; arr[i] != '.' && arr[i] != '\0'; i++) {
            size++;
            if (arr[i] == '('|| arr[i] == '[') {
                stack[top++] = arr[i];
            }
            else if (arr[i] == ')') {
                if (top > 0 && stack[top - 1] == '(') {
                    stack[--top] = 0;
                }
                else {
                    ck = 0;
                    break;
                }
            }
            else if (arr[i] == ']') {
                if (top > 0 && stack[top - 1] == '[') {
                    stack[--top] = 0;
                }
                else {
                    ck = 0;
                    break;
                }
            }
        }
        if (top > 0)
            ck = 0;
        printf("%s\n", ck == 1 ? "yes" : "no");
    }

    return 0;
}
