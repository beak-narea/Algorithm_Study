#include <stdio.h>

int min(int a, int b, int c) {
	int min = a > b ? b : a;
	return min > c ? c : min;
}

int dp[1000][1000];
int matrix[1000][1000] = { 0 };

int main() {
	int n, m, max_length = 0;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &matrix[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] == 1) {
				if (i == 0 || j == 0) {
					dp[i][j] = 1;
				}
				else {
					dp[i][j] = min(dp[i][j-1], dp[i-1][j], dp[i-1][j-1])+1;
				}
				if (dp[i][j] > max_length) {
					max_length = dp[i][j];
				}
			}
		}
	}
	printf("%d", max_length * max_length);
	return 0;
}