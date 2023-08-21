#include <bits/stdc++.h>

using namespace std;

int M, N;

const int AIR = 9;
const int MELT = 3;
const int n = 105;

int arr[n][n];
int air_visited[n][n];
int visited[n][n];

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };
int ret = 0;
int cnt = 0;

void DFS_air(int y, int x)			// 공기에 해당하는 부분을 AIR(9)로 바꾸기
{
	air_visited[y][x] = 1;
	arr[y][x] = AIR;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= M || nx >= N) continue;
		if (arr[ny][nx] == 0 && air_visited[ny][nx] == 0)
		{
			DFS_air(ny, nx);
		}
	}
}

void DFS(int y, int x)			// 공기와 맞닿은 치즈 부분을 MELT(3) 으로 바꾸기
{
	visited[y][x] = 1;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= M || nx >= N) continue;
		if (arr[y][x] == 1 && arr[ny][nx] == AIR)
		{
			arr[y][x] = MELT;
		}
		if (arr[ny][nx] == 1 && visited[ny][nx] == 0)
		{
			DFS(ny, nx);
		}
	}
}

int Cheese()			// 남은 치즈조각 개수 구하기
{
	int c = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i][j] == 1)
				c++;
		}
	}
	return c;
}

void Melt()			// 공기와 맞닿은 치즈 부분 녹이기 (MELT -> AIR)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i][j] == MELT)
				arr[i][j] = AIR;
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> M >> N;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
			if (i == 0 || j == 0 || i == M - 1 || j == N - 1)
				arr[i][j] = AIR;
		}
	}

	while (Cheese())
	{
		memset(visited, 0, sizeof(visited));
		memset(air_visited, 0, sizeof(air_visited));
		ret = Cheese();

		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (arr[i][j] == AIR && visited[i][j] == 0)
					DFS_air(i, j);
			}
		}

		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (arr[i][j] == 1 && visited[i][j] == 0)
					DFS(i, j);
			}
		}

		Melt();
		cnt++;

	}

	cout << cnt << "\n" << ret << "\n";
	return 0;
}