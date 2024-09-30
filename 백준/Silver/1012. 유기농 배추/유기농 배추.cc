#include <bits/stdc++.h>

using namespace std;

int T, M, N, K;
int arr[52][52];
int visited[52][52];
int cnt;

int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, 1, 0, -1 };

void dfs(int y, int x)
{
	visited[y][x] = 1;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= N || nx < 0 || nx >= M) continue;
		if (arr[ny][nx] == 1 && visited[ny][nx] == 0) dfs(ny, nx);
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> T;
	
	while (T--)
	{
		memset(arr, 0, sizeof(arr));
		memset(visited, 0, sizeof(visited));
		cnt = 0;

		cin >> M >> N >> K;

		for (int i = 0; i < K; i++)
		{
			int y, x;
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