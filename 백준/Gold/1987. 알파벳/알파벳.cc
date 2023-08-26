#include <bits/stdc++.h>

using namespace std;

const int n = 22;

int R, C;
char arr[n][n];
int visited[n][n];
int alpha[26];
int cnt = 1;
int mx = INT_MIN;
vector<char> v;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

bool isV(char c)
{
	if (alpha[c - 'A'] != 0)
		return true;
	else
		return false;
}

void go(int y, int x)
{
	visited[y][x] = 1;
	alpha[arr[y][x] - 'A']++;
	v.push_back(arr[y][x]);
	mx = max(mx, int(v.size()));

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= R || nx >= C) continue;
		if (visited[ny][nx] == 0 && isV(arr[ny][nx]) == false)
		{
			go(ny, nx);
			v.pop_back();
			visited[ny][nx] = 0;
			alpha[arr[ny][nx] - 'A']--;
		}
	}
}

int main(void)
{
	cin >> R >> C;

	for (int i = 0; i < R; i++)
	{
		string temp;
		cin >> temp;
		for (int j = 0; j < C; j++)
		{
			arr[i][j] = temp[j];
		}
	}

	go(0, 0);

	cout << mx << "\n";
	return 0;
}