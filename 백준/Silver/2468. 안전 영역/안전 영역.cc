#include <bits/stdc++.h>

using namespace std;

const int n = 101;
int arr[n][n];
int visited[n][n];

int T;
int cnt = 0;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

void DFS(int y, int x, int d)
{
	visited[y][x] = 1;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= T || nx < 0 || nx >= T) continue;
		if (visited[ny][nx] == 0 && arr[ny][nx] > d)
		{
			DFS(ny, nx, d);
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

	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < T; j++)
		{
			cin >> arr[i][j];
		}
	}
	int ret = INT_MIN;
	for (int d = 0; d < 101; d++)
	{
		memset(visited, 0, sizeof(visited));
		//fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
		cnt = 0;
		for (int i = 0; i < T; i++)
		{
			for (int j = 0; j < T; j++)
			{
				if (arr[i][j] > d && visited[i][j] == 0)
				{
					cnt++;
					DFS(i, j, d);

				}
			}
		}
		ret = (ret > cnt ? ret : cnt);
	}
	cout << ret << "\n";

	return 0;
}