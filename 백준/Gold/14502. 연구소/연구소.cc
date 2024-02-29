#include <bits/stdc++.h>

using namespace std;

int N, M;
int mx = 0;
int arr[10][10];
int visited[10][10];
int tmp[10][10];

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

vector<pair<int, int>> walls;

void dfs(int y, int x)
{
	visited[y][x] = 1;
	tmp[y][x] = 2;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
		if (visited[ny][nx] == 0 && tmp[ny][nx] == 0)
			dfs(ny, nx);
	}

	return;
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
			if (arr[i][j] == 0) walls.push_back({ i, j });
		}
	}

	for (int i = 0; i < walls.size(); i++)
	{
		for (int j = i + 1; j < walls.size(); j++)
		{
			for (int k = j + 1; k < walls.size(); k++)
			{
				memcpy(tmp, arr, sizeof(arr));
				memset(visited, 0, sizeof(visited));
				int cnt = 0;

				tmp[walls[i].first][walls[i].second] = 1;
				tmp[walls[j].first][walls[j].second] = 1;
				tmp[walls[k].first][walls[k].second] = 1;

				for (int y = 0; y < N; y++)
				{
					for (int x = 0; x < M; x++)
					{
						if (tmp[y][x] == 2 && visited[y][x] == 0)
							dfs(y, x);
					}
				}

				for (int y = 0; y < N; y++)
				{
					for (int x = 0; x < M; x++)
					{
						if (tmp[y][x] == 0) cnt++;
					}
				}

				mx = max(cnt, mx);
			}
		}
	}
	
	cout << mx << "\n";
	
	return 0;
}