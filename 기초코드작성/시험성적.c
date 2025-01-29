#include <stdio.h>

int main() {
	int a = 0;
	char answer;
	scanf("%d", &a);

	if (a >= 90) {
		answer = 'A';
	}
	else if (a >= 80) {
		answer = 'B';
	}
	else if (a >= 70) {
		answer = 'C';
	}
	else if (a >= 60) {
		answer = 'D';
	}
	else {
		answer = 'F';
	}
	printf("%c\n", answer);
	return 0;
}