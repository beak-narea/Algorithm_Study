#include <stdio.h>

int main() {
	int arr[4] = { 0 };
	for (int j = 0; j < 3; j++) {
		scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);

		int count[2] = { 0 };
		for (int i = 0; i < 4; i++) {
			count[arr[i]]++;
		}
		switch (count[0]) {
		case 0:
			printf("E\n");
			break;
		case 1:
			printf("A\n");
			break;
		case 2:
			printf("B\n");
			break;
		case 3:
			printf("C\n");
			break;
		case 4:
			printf("D\n");
			break;
		}
	}
	


	return 0;
}