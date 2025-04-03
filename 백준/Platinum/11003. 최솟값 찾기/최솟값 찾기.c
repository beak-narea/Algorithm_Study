#include <stdio.h>
#include <stdlib.h>

typedef struct {
	long value;
	long index;
}Element;

Element arr[5000001];
long D[5000001];
int main() {
	long n, L, data, front = -1, back = 1;
	scanf("%ld %ld", &n, &L);
	for (int i = 1; i <= n; i++) {
		scanf("%ld", &data);
		if (front == -1) {
			front = 1;
			arr[front].value = data;
			arr[front].index = i;
		}
		else {
			if (arr[front].index < i - L + 1) {
				front++;
			}
			while (arr[back].value > data && back >= front) {
				back--;
				
			}
			arr[++back].value = data;
			arr[back].index = i;
		}
		printf("%ld ", arr[front].value);
	}

	return 0;
}