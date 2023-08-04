#include <bits/stdc++.h>

using namespace std;

const int n = 101;
int arr[n][n];
int visited[n][n];
int cnt = 0;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int M, N, K;
int sy, sx, ey, ex;

void DFS(int y, int x)
{
	visited[y][x] = cnt;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= M || nx < 0 || nx >= N) continue;
		if (visited[ny][nx] == 0 && arr[ny][nx] == 0)
		{
			DFS(ny, nx);
		}
	}
	return;
}

int main(void)
{
	cin >> M >> N >> K;

	for (int i = 0; i < K; i++)
	{
		cin >> sx >> sy >> ex >> ey;

		for (int j = sy; j < ey; j++)
		{
			for (int k = sx; k < ex; k++)
			{
				arr[j][k] = 1;
			}
		}
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (visited[i][j] == 0 && arr[i][j] == 0)
			{
				cnt++;
				DFS(i, j);
			}
		}
	}

	cout << cnt << "\n";

	vector<int> v(cnt);

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (visited[i][j] != 0)
			{
				v[visited[i][j] - 1]++;
			}
		}
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << "\n";
	
	return 0;
}