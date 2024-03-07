#include <bits/stdc++.h>

using namespace std;

int R, C;

char arr[1004][1004];
int visitedJ[1004][1004];
int visitedF[1004][1004];

int jy, jx, fy, fx;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

bool out = false;
int mn = INT_MAX;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> R >> C;

	memset(visitedF, -1, sizeof(visitedF));
	memset(visitedJ, -1, sizeof(visitedJ));

	queue<pair<int, int>> fire;
	queue<pair<int, int>> JH;

	for (int i = 0; i < R; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < C; j++)
		{
			arr[i][j] = s[j];
			if (arr[i][j] == 'J')
			{
				JH.push({ i, j });
				visitedJ[i][j] = 0;
			}
			if (arr[i][j] == 'F')
			{
				fire.push({ i, j });
				visitedF[i][j] = 0;
			}
		}
	}

	while (!JH.empty())
	{
		tie(jy, jx) = JH.front(); JH.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = jy + dy[i];
			int nx = jx + dx[i];

			if (ny < 0 || nx < 0 || ny >= R || nx >= C) continue;
			if (visitedJ[ny][nx] != -1 || arr[ny][nx] != '.') continue;
			JH.push({ ny, nx });
			visitedJ[ny][nx] = visitedJ[jy][jx] + 1;
		}
	}

	while (!fire.empty())
	{
		tie(fy, fx) = fire.front(); fire.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = fy + dy[i];
			int nx = fx + dx[i];

			if (ny < 0 || nx < 0 || ny >= R || nx >= C) continue;
			if (visitedF[ny][nx] != -1 || arr[ny][nx] != '.') continue;
			fire.push({ ny, nx });
			visitedF[ny][nx] = visitedF[fy][fx] + 1;
		}
	}

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (i == 0 || j == 0 || i == R - 1 || j == C - 1)
			{
				if (visitedJ[i][j] != -1)
				{
					if (visitedF[i][j] == -1 || visitedJ[i][j] < visitedF[i][j])
					{
						mn = min(mn, visitedJ[i][j]);
						out = true;
					}
				}
			}
		}
	}

	if (out) cout << mn + 1 << "\n";
	else cout << "IMPOSSIBLE\n";

	return 0;
}
