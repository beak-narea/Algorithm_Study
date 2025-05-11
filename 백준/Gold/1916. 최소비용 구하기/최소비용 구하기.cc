#include <stdio.h>

#define INF 1000000000
#define MAX 1010

int cost[MAX][MAX];     // 도시 간 이동 비용 저장
int distance[MAX];      // 시작 도시에서 각 도시까지의 최소 비용
int visited[MAX];       // 방문 여부

int main() {
    int n, m;
    scanf("%d", &n); // 도시 수
    scanf("%d", &m); // 버스 수

    // 초기화
    for (int i = 1; i <= n; i++) {
        distance[i] = INF;
        for (int j = 1; j <= n; j++) {
            if (i == j) cost[i][j] = 0;
            else cost[i][j] = INF;
        }
    }

    // 버스 정보 입력
    for (int i = 0; i < m; i++) {
        int from, to, c;
        scanf("%d %d %d", &from, &to, &c);
        if (cost[from][to] > c) // 같은 경로 여러 개 있을 수 있음
            cost[from][to] = c;
    }

    int start, end;
    scanf("%d %d", &start, &end);

    distance[start] = 0;

    // 다익스트라 시작
    for (int i = 1; i <= n; i++) {
        int min = INF;
        int now = -1;

        // 방문 안 한 도시 중 가장 가까운 도시 찾기
        for (int j = 1; j <= n; j++) {
            if (!visited[j] && distance[j] < min) {
                min = distance[j];
                now = j;
            }
        }

        if (now == -1) break; // 더 이상 갈 수 있는 도시 없음

        visited[now] = 1;

        // now 도시에서 갈 수 있는 다른 도시들 거리 업데이트
        for (int j = 1; j <= n; j++) {
            if (distance[j] > distance[now] + cost[now][j]) {
                distance[j] = distance[now] + cost[now][j];
            }
        }
    }

    printf("%d\n", distance[end]);
    return 0;
}
