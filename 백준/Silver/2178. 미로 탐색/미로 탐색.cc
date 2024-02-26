#include <bits/stdc++.h>

using namespace std;

int arr[104][104];
int visited[104][104];

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int main(void)
{
	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			scanf("%1d", &arr[i][j]);
		}
	}

	queue<pair<int, int>> q;
	q.push({ 1, 1 });
	visited[1][1] = 1;
	
	while (q.size())
	{
		int x, y, nx, ny;
		tie(y, x) = q.front(); q.pop();
		for (int i = 0; i < 4; i++)
		{
			ny = y + dy[i];
			nx = x + dx[i];

			if (ny < 1 || nx < 1 || ny > N || nx > M) continue;
			if (visited[ny][nx] != 0 || arr[ny][nx] == 0) continue;
			q.push({ ny, nx });
			visited[ny][nx] = visited[y][x] + 1;
		}
	}

	cout << visited[N][M] << "\n";
	return 0;
}