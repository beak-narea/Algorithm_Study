#include <stdio.h>

int main() {
	int count[26];
	memset(count, -1, sizeof(count));
	char arr[100];
	int alp;
	scanf("%s", &arr);
	for (int i = 0; arr[i] != 0; i++) {
		alp = arr[i] -97;
		if (count[alp] == -1) {
			count[alp] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", count[i]);
	}
	return 0;
}