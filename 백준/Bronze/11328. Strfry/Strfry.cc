#include <stdio.h>

int main() {
	int n;
	
	scanf("%d", &n);
	for (int j = 0; j < n; j++) {
		int ck = 1, arr[30] = { 0 }, arr2[30] = { 0 };
		char str[1001] = { 0 };
		char str2[1001] = { 0 };
		scanf("%s", &str);
		scanf("%s", &str2);
		for (int i = 0; str[i] != 0; i++) {
			arr[str[i] - 97]++;
			arr2[str2[i] - 97]++;
		}
		for (int i = 0; i < 26; i++) {
			if (arr[i] != arr2[i]) {
				ck = 0;
				printf("Impossible\n");
				break;
			}
		}
		if (ck == 1) {
			printf("Possible\n");
		}
	}
	

	return 0;
}