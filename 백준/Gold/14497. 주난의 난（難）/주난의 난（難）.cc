#include <bits/stdc++.h>

using namespace std;

int N, M;
char arr[303][303];
int visited[303][303];
int jy, jx, by, bx;
int cnt;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

void dfs(int y, int x)
{
	visited[y][x] = 1;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 1 || nx < 1 || ny > N || nx > M || visited[ny][nx]) continue;
		if (arr[ny][nx] != '0')
		{
			visited[ny][nx] = 1;
			arr[ny][nx] = '0';
		}
		else if (arr[ny][nx] == '0')
		{
			dfs(ny, nx);
		}
	}
}

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

	while (1)
	{
		if (arr[by][bx] == '0') break;
		memset(visited, 0, sizeof(visited));

		dfs(jy, jx);
		
		cnt++;

	}

	cout << cnt << "\n";

	return 0;
}