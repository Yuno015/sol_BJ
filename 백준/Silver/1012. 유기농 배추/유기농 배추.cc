#include <bits/stdc++.h>

using namespace std;

const int n = 51;
int arr[n][n];
int visited[n][n];
int cnt = 0;

int T;
int N, M, K;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

void DFS(int y, int x)
{
	visited[y][x] = cnt;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= N || nx < 0 || nx >= M) continue;
		if (visited[ny][nx] == 0 && arr[ny][nx] == 1)
		{
			DFS(ny, nx);
		}
	}
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	while (T--)
	{
		memset(arr, 0, n * n * sizeof(int));
		memset(visited, 0, n * n * sizeof(int));
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
					DFS(i, j);
				}
			}
		}

		cout << cnt << "\n";

		
	}
	return 0;
}