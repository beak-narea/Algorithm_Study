#include <stdio.h>
#include <stdlib.h>

int main() {
    char buffer[1000000];  // �Է��� ���� ����
    int T, A, B;

    // �� ���� �Է¹ޱ� ���� fgets ���
    fgets(buffer, sizeof(buffer), stdin);
    T = strtol(buffer, NULL, 10);  // ���ڿ��� ������ ��ȯ

    char output[1000000];  // ��� ����� ����
    char* ptr = output;    // ���� ������

    for (int i = 0; i < T; i++) {
        fgets(buffer, sizeof(buffer), stdin);

        // strtol�� �̿��� ���� �������� ���� ��ȯ
        char* p = buffer;
        A = strtol(p, &p, 10);  // ù ��° ����
        B = strtol(p, NULL, 10);  // �� ��° ����

        // sprintf�� �̿��� ���ۿ� ����
        ptr += sprintf(ptr, "%d\n", A + B);
    }

    // �� ���� ���
    fputs(output, stdout);

    return 0;
}
