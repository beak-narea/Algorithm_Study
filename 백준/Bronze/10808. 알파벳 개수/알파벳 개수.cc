#include <stdio.h>

int main() {
	char str[100] = { 0 };
	int arr[26] = { 0 };
	int index = 0;
	scanf("%s", str);
	for (int i = 0; str[i]!=0; i++) {
		index = (int)str[i] - 97;
		arr[index]++;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}