#include <stdio.h>

int main() {
	int n, v, num, count = 0;
	int arr[202] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[num+100]++;
	}
	scanf("%d", &v);
	printf("%d", arr[v+100]);
	return 0;
}