#include <stdio.h>

int queue[1001];
int visited2[1001] = { 0 };
int front = 0, rear = 0;

void BFS(int graph[][1001], int start, int n) {
	queue[rear++] = start;
	visited2[start] = 1;
	printf("%d ", start);
	while (front < rear) {
		int v = queue[front++];
		for (int i = 1; i <= n; i++) {
			if (visited2[i] == 1) {
				graph[v][i] = 0;
			}
			if (graph[v][i] == 1) {
				queue[rear++] = i;
				visited2[i] = 1;
				printf("%d ", i);
			}
		}
	}
}

void printGraph(int graph[][1001], int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}
}

int visited[1001] = { 0 };

void DFS(int graph[][1001], int start, int n) {
	printf("%d ", start);
	visited[start] = 1;
	for (int i = 1; i <= n; i++) {
		if (visited[i] == 1) {
			graph[start][i] = 0;
		}
		if (graph[start][i] == 1) {
			graph[start][i] = 0;
			graph[i][start] = 0;
			DFS(graph, i, n);
		}
	}
}


int g[1001][1001] = { 0 };
int g2[1001][1001] = { 0 };

int main() {
	int n, m, start, a, b;
	
	scanf("%d %d %d", &n, &m, &start);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		g2[a][b] = 1;
		g2[b][a] = 1;
		g[a][b] = 1;
		g[b][a] = 1;
	}
	DFS(g, start, n);
	printf("\n");
	BFS(g2, start, n);
	return 0;
}