#include <bits/stdc++.h>

using namespace std;

int R, C, K;
char arr[7][7];
int visited[7][7];

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int dfs(int y, int x)
{
	if (y == 0 && x == C - 1)
	{
		if (K == visited[y][x]) return 1;
		return 0;
	}

	int ret = 0;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= R || nx >= C) continue;
		if (arr[ny][nx] == 'T' || visited[ny][nx] != 0) continue;

		visited[ny][nx] = visited[y][x] + 1;
		ret += dfs(ny, nx);
		visited[ny][nx] = 0;
	}
	return ret;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> R >> C >> K;

	for (int i = 0; i < R; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < C; j++)
		{
			arr[i][j] = s[j];
		}
	}

	visited[R-1][0] = 1;
	cout << dfs(R - 1, 0) << "\n";

	return 0;
}