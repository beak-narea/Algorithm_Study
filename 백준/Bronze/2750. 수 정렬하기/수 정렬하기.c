#include <stdio.h>

int main() {
	int n, num;
	int arr[2002] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[num+1000]++;
	}
	for (int i = 0; i <= 2001; i++) {
		if (arr[i] > 0) {
			printf("%d\n",i-1000);
		}
		
	}
	return 0;
}