#include <bits/stdc++.h>

using namespace std;

int N, M;
char arr[104][104];
int air_visited[104][104];
int before;
int cnt = 0;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

void dfs_Air(int y, int x)
{
	air_visited[y][x] = 1;
	arr[y][x] = 'A';

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
		if (air_visited[ny][nx] == 0 && arr[ny][nx] == '0')
			dfs_Air(ny, nx);
	}
}

int get_Cheese()
{
	int ret = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (arr[i][j] == '1')
				ret++;
		}
	}

	return ret;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
			if (i == 0 || j == 0 || i == N - 1 || j == M - 1)
				arr[i][j] = 'A';
		}
	}

	while (get_Cheese())
	{
		memset(air_visited, 0, sizeof(air_visited));
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (arr[i][j] == 'A' && air_visited[i][j] == 0)
					dfs_Air(i, j);
			}
		}

		before = get_Cheese();
		
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (arr[i][j] == '1')
				{
					for (int k = 0; k < 4; k++)
					{
						int ny = i + dy[k];
						int nx = j + dx[k];

						if (arr[ny][nx] == 'A')
						{
							arr[i][j] = '0';
							break;
						}
					}
				}
			}
		}
		cnt++;
	}

	cout << cnt << "\n" << before << "\n";

	return 0;
}