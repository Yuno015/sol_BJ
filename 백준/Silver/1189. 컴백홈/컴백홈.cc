#include <bits/stdc++.h>

using namespace std;

const int N = 7;
const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int R, C, K, x, y, cnt, visited[N][N];
char arr[N][N];
string s;
vector<pair<int, int>> v;

void go(int y, int x)
{
	if (v.size() == K)
	{
		if (v[K-1].first == 0 && v[K-1].second == C - 1)
		{
			cnt++;
		}
		return;
	}
	
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= R || nx >= C) continue;
		if (visited[ny][nx] == 0 && arr[ny][nx] != 'T')
		{
			visited[ny][nx] = 1;
			v.push_back({ ny, nx });
			go(ny, nx);
			v.pop_back();
			visited[ny][nx] = 0;
		}
	}
}

int main(void)
{
	cin >> R >> C >> K;
	
	for (int i = 0; i < R; i++)
	{
		cin >> s;
		for (int j = 0; j < C; j++)
		{
			arr[i][j] = s[j];
		}
	}

	visited[R - 1][0] = 1;
	v.push_back({ R - 1, 0 });
	go(R - 1, 0);

	cout << cnt << "\n";
	return 0;
}