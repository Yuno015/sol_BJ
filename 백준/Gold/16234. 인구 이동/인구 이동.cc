#include <bits/stdc++.h>

using namespace std;

int N, L, R;
int arr[54][54];
int visited[54][54];
int uni;
int ret;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int sum[2505];
int num[2505];

void dfs(int y, int x)
{
	visited[y][x] = uni;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= N || nx >= N) continue;
		if (visited[ny][nx] == -1 && abs(arr[ny][nx] - arr[y][x]) >= L && abs(arr[ny][nx] - arr[y][x]) <= R)
			dfs(ny, nx);
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> L >> R;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}

	while (1)
	{
		memset(visited, -1, sizeof(visited));
		memset(num, 0, sizeof(num));
		memset(sum, 0, sizeof(sum));
		uni = 0;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (visited[i][j] == -1)
				{
					dfs(i, j);
					uni++;
				}
			}
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				num[visited[i][j]]++;
				sum[visited[i][j]] += arr[i][j];
			}
		}

		int n = *max_element(num, num + uni + 1);
		if (n == 1) break;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				arr[i][j] = sum[visited[i][j]] / num[visited[i][j]];
			}
		}

		ret++;
	}
	cout << ret << "\n";
	return 0;
}