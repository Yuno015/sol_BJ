#include <bits/stdc++.h>

using namespace std;

int N, M, y, x, sy, sx;
int cnt;
string s;
char arr[1505][1505];
int visited[1505][1505], visited_Swan[1505][1505];
queue<pair<int, int>> waterQ, water_tempQ, swanQ, swan_tempQ;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

void Qclear(queue<pair<int, int>>& q)
{
	queue<pair<int, int>> temp;
	swap(temp, q);
}

bool move_swan()
{
	while (!swanQ.empty())
	{
		tie(y, x) = swanQ.front(); swanQ.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= N || nx >= M || visited_Swan[ny][nx]) continue;
			visited_Swan[ny][nx] = 1;
			if (arr[ny][nx] == '.') swanQ.push({ ny,nx });
			else if (arr[ny][nx] == 'X') swan_tempQ.push({ ny, nx });
			else if (arr[ny][nx] == 'L') return true;
		}
	}

	return false;
}

void melt()
{
	while (!waterQ.empty())
	{
		tie(y, x) = waterQ.front(); waterQ.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= N || nx >= M || visited[ny][nx]) continue;
			if (arr[ny][nx] == 'X')
			{
				visited[ny][nx] = 1;
				water_tempQ.push({ ny,nx });
				arr[ny][nx] = '.';
			}
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		for (int j = 0; j < M; j++)
		{
			arr[i][j] = s[j];
			if (arr[i][j] == 'L')
			{
				sy = i;
				sx = j;
			}
			if (arr[i][j] == '.' || arr[i][j] == 'L')
			{
				visited[i][j] = 1;
				waterQ.push({ i, j });
			}
		}
	}

	visited_Swan[sy][sx] = 1;
	swanQ.push({ sy, sx });

	while (1)
	{
		if (move_swan()) break;

		melt();
		waterQ = water_tempQ;
		swanQ = swan_tempQ;
		Qclear(water_tempQ);
		Qclear(swan_tempQ);
		cnt++;
	}

	cout << cnt << "\n";
	return 0;
}