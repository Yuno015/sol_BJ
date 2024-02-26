#include <bits/stdc++.h>

using namespace std;

int M, N, K;
int arr[104][104];
int visited[104][104];
int tmp;
vector<int> ret;

const int dy[] = { -1,0,1,0 };
const int dx[] = { 0,1,0,-1 };

void dfs(int y, int x)
{
	visited[y][x] = 1;
	tmp++;
	for(int i=0;i<4;i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= M || ny >= N) continue;
		if (arr[ny][nx] == 1 && visited[ny][nx] == 0)
		{
			dfs(ny, nx);
		}
	}

	return;
}

int main(void)
{
	cin >> M >> N >> K;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = 1;
		}
	}

	while (K--)
	{
		int sx, sy, ex, ey;
		cin >> sx >> sy >> ex >> ey;

		for (int i = sy; i < ey; i++)
		{
			for (int j = sx; j < ex; j++)
			{
				arr[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i][j] == 1 && visited[i][j] == 0)
			{
				tmp = 0;
				dfs(i, j);
				ret.push_back(tmp);
			}
		}
	}

	sort(ret.begin(), ret.end());

	cout << ret.size() << "\n";
	for (int i = 0; i < ret.size(); i++)
	{
		cout << ret[i] << " ";
	}

	return 0;
}