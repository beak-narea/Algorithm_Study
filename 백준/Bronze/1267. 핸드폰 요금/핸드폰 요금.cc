#include <stdio.h>

int main() {
	int n, call_time;
	int Y_pay = 0, M_pay = 0, min;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &call_time);
		Y_pay += ((call_time / 30) * 10) + (call_time % 29 ? 10 : 0);
		M_pay += ((call_time / 60) * 15) + (call_time % 59 ? 15 : 0);
	}
	if (Y_pay <= M_pay) {
		printf("Y ");
		min = Y_pay;
	}
	if (M_pay <= Y_pay) {
		printf("M ");
		min = M_pay;
	}
	printf("%d ", min);
	

	return 0;
}