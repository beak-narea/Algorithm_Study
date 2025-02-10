#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 0, arr[30] = { 0 };
	char str[1001] = { 0 };
	char str2[1001] = { 0 };
	scanf("%s", &str);
	scanf("%s", &str2);
	for (int i = 0; str[i] != 0; i++)
		arr[str[i] - 97]++;
	for (int i = 0; str2[i] != 0; i++) {
		arr[str2[i] - 97]--;
	}
	for (int i = 0; i < 26; i++) {
		if (arr[i] != 0) {
			count += abs(arr[i]);
		}
	}
	printf("%d", count);
	return 0;
}