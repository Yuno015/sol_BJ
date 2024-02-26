#include <bits/stdc++.h>

using namespace std;

int arr[104][104];
int visited[104][104];

const int dy[] = { -1,0,1,0 };
const int dx[] = { 0,1,0,-1 };

int mx = 1;
int cur;
int N;

void dfs(int y, int x, int d)
{
	visited[y][x] = cur;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= N || nx >= N) continue;
		if (visited[ny][nx] == 0 && arr[ny][nx] > d)
		{
			dfs(ny, nx, d);
		}
	}
	return;
}

int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int d = 1; d < 101; d++)
	{
		memset(visited, 0, sizeof(visited));
		cur = 0;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (visited[i][j] == 0 && arr[i][j] > d)
				{
					cur++;
					dfs(i, j, d);
				}
			}
		}
		if (cur > mx) mx = cur;
		if (cur == 0) break;
	}
	cout << mx << "\n";
	return 0;
}