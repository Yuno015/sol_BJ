#include <bits/stdc++.h>

using namespace std;

int N, M;
int y, x;
int mx = -1;
char arr[54][54];
int visited[54][54];
vector<pair<int, int>> v;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < M; j++)
		{
			arr[i][j] = s[j];
			if (arr[i][j] == 'L') v.push_back({ i, j });
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		memset(visited, 0, sizeof(visited));
		queue<pair<int, int>> q;

		q.push({ v[i].first, v[i].second });
		visited[v[i].first][v[i].second] = 1;
		while (!q.empty())
		{
			tie(y, x) = q.front(); q.pop();

			for (int n = 0; n < 4; n++)
			{
				int ny = y + dy[n];
				int nx = x + dx[n];

				if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
				if (arr[ny][nx] == 'L' && visited[ny][nx] == 0)
				{
					visited[ny][nx] = visited[y][x] + 1;
					q.push({ ny, nx });
				}
			}
		}
		int tmp = -1;

		for (int a = 0; a < N; a++)
		{
			for (int b = 0; b < M; b++)
			{
				tmp = max(tmp, visited[a][b] - 1);
			}
		}

		mx = max(tmp, mx);
	}

	cout << mx << "\n";
	return 0;
}