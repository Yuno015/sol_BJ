#include <bits/stdc++.h>

using namespace std;

const int n = 1004;

int R, C;
char arr[n][n];
int visitedF[n][n];
int visitedJ[n][n];
int jy, jx;
int y, x;
int ret = INT_MAX;
bool escape = false;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int main(void)
{
	cin >> R >> C;
	cin.ignore();
	for (int i = 0; i < R; i++)
	{
		string temp;
		cin >> temp;
		for (int j = 0; j < C; j++)
		{
			arr[i][j] = temp[j];
			if (temp[j] == 'J')
			{
				jy = i;
				jx = j;
			}
			if (temp[j] == 'F')
			{
				visitedJ[i][j] = INT_MAX;
			}
		}
	}

	queue<pair<int, int>> fire;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (arr[i][j] == 'F')
			{
				fire.push({ i, j });
				visitedF[i][j] = 1;
			}
		}
	}

	while (fire.size())
	{
		tie(y, x) = fire.front();
		fire.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= R || nx >= C) continue;
			if (arr[ny][nx] != '#' && visitedF[ny][nx] == 0)
			{
				fire.push({ ny, nx });
				visitedF[ny][nx] = visitedF[y][x] + 1;
			}
		}
	}

	queue<pair<int, int>> JH;
	JH.push({ jy, jx });
	visitedJ[jy][jx] = 1;

	while (JH.size())
	{
		tie(y, x) = JH.front();
		JH.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= R || nx >= C) continue;
			if (arr[ny][nx] == '.' && visitedJ[ny][nx] == 0)
			{
				JH.push({ ny, nx });
				visitedJ[ny][nx] = visitedJ[y][x] + 1;
			}
		}
	}

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (i == 0 || j == 0 || i == R - 1 || j == C - 1)
			{
				if ((visitedF[i][j] == 0 && visitedJ[i][j] != 0) || visitedJ[i][j] < visitedF[i][j])
				{
					escape = true;
					ret = min(ret, visitedJ[i][j]);
				}
			}
		}
	}

	if (escape && ret != 0)
		cout << ret << "\n";
	else
		cout << "IMPOSSIBLE" << "\n";
	return 0;
}