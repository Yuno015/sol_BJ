#include <bits/stdc++.h>

using namespace std;

int N, M;
char arr[303][303];
int visited[303][303];
int jy, jx, by, bx;
int y, x;
int cnt;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);

	cin >> N >> M;
	cin >> jy >> jx >> by >> bx;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> arr[i][j];
		}
	}

	queue<pair<int, int>> q1, q0;
	visited[jy][jx] = 1;
	q1.push({ jy, jx });

	while (!q1.empty() || !q0.empty())
	{
		if (q0.empty())
		{
			tie(y, x) = q1.front(); q1.pop();
		}
		else
		{
			tie(y, x) = q0.front(); q0.pop();
		}
		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 1 || nx < 1 || ny > N || nx > M || visited[ny][nx]) continue;
			if (arr[ny][nx] == '0')
			{
				visited[ny][nx] = visited[y][x];
				q0.push({ ny, nx });
			}
			else
			{
				visited[ny][nx] = visited[y][x] + 1;
				q1.push({ ny, nx });
			}
		}
	}

	cout << visited[by][bx] - 1 << "\n";

	return 0;
}