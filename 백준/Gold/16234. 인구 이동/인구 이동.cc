#include <bits/stdc++.h>

using namespace std;

const int n = 54;

int N, L, R;
int arr[n][n];
int visited[n][n];

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

bool fMove = true;
int cnt = 0;
int vcnt = 1;
int cp[n * n];
int cpcnt[n * n];

void go(int y, int x)
{
	visited[y][x] = vcnt;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= N || nx >= N || visited[ny][nx]) continue;
		if (abs(arr[ny][nx] - arr[y][x]) >= L && abs(arr[ny][nx] - arr[y][x]) <= R)
		{
			fMove = true;
			go(ny, nx);
		}
	}
}

int main(void)
{
	cin >> N >> L >> R;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}

	while (fMove)
	{
		fMove = false;
		vcnt = 1;
		cnt++;
		memset(visited, 0, sizeof(visited));
		memset(cp, 0, sizeof(cp));
		memset(cpcnt, 0, sizeof(cpcnt));

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (visited[i][j] == 0)
				{
					go(i, j);
					vcnt++;
				}
			}
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cp[visited[i][j]] += arr[i][j];
				cpcnt[visited[i][j]]++;
			}
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				arr[i][j] = cp[visited[i][j]] / cpcnt[visited[i][j]];
			}
		}
		/*
		for (int i = 0; i < N * N + 2; i++)
		{
			cout << cp[i] << " ";
		}
		cout << "\n";

		for (int i = 0; i < N * N + 2; i++)
		{
			cout << cpcnt[i] << " ";
		}
		cout << "\n";
		
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
		*/
	}

	/*
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << visited[i][j] << " ";
		}
		cout << "\n";
	}
	*/
	cout << cnt - 1 << "\n";
	return 0;
}