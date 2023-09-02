#include <bits/stdc++.h>

using namespace std;

const int N = 1505;
const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int R, C, visitedW[N][N], visitedS[N][N], day, swanX, swanY, x, y, nx, ny;
char arr[N][N];
string s;
queue<pair<int, int>> waterQ, water_tempQ, swanQ, swan_tempQ;

void Qclear(queue<pair<int, int>>& q)
{
	queue<pair<int, int>> empty;
	swap(q, empty);
}

bool Swan()
{
	while (swanQ.size())
	{
		tie(y, x) = swanQ.front();
		swanQ.pop();

		for (int i = 0; i < 4; i++)
		{
			ny = y + dy[i];
			nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= R || nx >= C || visitedS[ny][nx]) continue;
			visitedS[ny][nx] = 1;
			if (arr[ny][nx] == '.') swanQ.push({ ny, nx });
			else if (arr[ny][nx] == 'X') swan_tempQ.push({ ny, nx });
			else if (arr[ny][nx] == 'L') return true;
		}
	}
	return false;
}

void Water()
{
	while (waterQ.size())
	{
		tie(y, x) = waterQ.front();
		waterQ.pop();

		for (int i = 0; i < 4; i++)
		{
			ny = y + dy[i];
			nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= R || nx >= C) continue;
			if (visitedW[ny][nx] == 0 && arr[ny][nx] == 'X')
			{
				water_tempQ.push({ ny, nx });
				visitedW[ny][nx] = 1;
				arr[ny][nx] = '.';
			}
		}
	}
}

int main(void)
{
	cin >> R >> C;
	
	for (int i = 0; i < R; i++)
	{
		cin >> s;
		for (int j = 0; j < C; j++)
		{
			arr[i][j] = s[j];
			if (arr[i][j] == 'L')
			{
				swanY = i;
				swanX = j;
			}
			if (arr[i][j] == '.' || arr[i][j] == 'L')
			{
				waterQ.push({ i, j });
				visitedW[i][j] = 1;
			}
		}
	}
	swanQ.push({ swanY, swanX });
	visitedS[swanY][swanX] = 1;
	while (1)
	{
		if (Swan()) break;
		Water();
		waterQ = water_tempQ;
		swanQ = swan_tempQ;
		Qclear(water_tempQ);
		Qclear(swan_tempQ);
		day++;
	}

	cout << day << "\n";
	return 0;
}