#include <stdio.h>

int main() {
    int n;
    for (int i = 10; i < 100; i++) {
        int f = i / 10, b = i % 10;
        if (((b * 10) + f) % 4 == 0) {
            if ((b + f) % 6 == 0) {
                if (b != 8 && f != 8) {
                    printf("%d", i);
                    break;
                }
            }
        }
    }

    return 0;
}