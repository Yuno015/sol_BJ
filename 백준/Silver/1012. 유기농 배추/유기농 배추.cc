#include <bits/stdc++.h>

using namespace std;

int arr[54][54];
int visited[54][54];

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int M, N, K;
int cnt;

void dfs(int y, int x)
{
	visited[y][x] = cnt;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
		if (arr[ny][nx] == 0 || visited[ny][nx] != 0) continue;
		dfs(ny, nx);
	}
}

int main(void)
{
	int T;
	cin >> T;

	while (T--)
	{
		memset(arr, 0, sizeof(arr));
		memset(visited, 0, sizeof(visited));
		cnt = 0;

		cin >> M >> N >> K;

		for (int i = 0; i < K; i++)
		{
			int x, y;
			cin >> x >> y;
			arr[y][x] = 1;
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (arr[i][j] == 1 && visited[i][j] == 0)
				{
					cnt++;
					dfs(i, j);
				}
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}