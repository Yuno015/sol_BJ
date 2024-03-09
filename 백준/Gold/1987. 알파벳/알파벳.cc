#include <bits/stdc++.h>

using namespace std;

int R, C;
char arr[22][22];
int visited[22][22];
int alpha[30];
int mx = 0;
int ret;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

bool cmp(string a, string b)
{
	if (a.length() == b.length()) return a < b;
	return a.length() < b.length();
}

void go(int y, int x, int cnt)
{
	ret = max(ret, cnt);

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= R || nx >= C) continue;
		if (visited[ny][nx] != 0 || alpha[arr[ny][nx] - 'A'] != 0) continue;
		alpha[arr[ny][nx] - 'A'] = 1;
		visited[ny][nx] = 1;
		go(ny, nx, cnt + 1);
		alpha[arr[ny][nx] - 'A'] = 0;
		visited[ny][nx] = 0;
	}

	return;
}

int main(void)
{
	cin >> R >> C;
	
	for (int i = 0; i < R; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < C; j++)
		{
			arr[i][j] = s[j];
		}
	}

	alpha[arr[0][0] - 'A'] = 1;
	visited[0][0] = 1;
	go(0, 0, 1);

	cout << ret << "\n";
	return 0;
}
