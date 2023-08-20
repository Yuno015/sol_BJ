#include <bits/stdc++.h>

using namespace std;

const int n = 9;
const int wall = 3;
const int dy[] = { -1,0,1,0 };
const int dx[] = { 0,1,0,-1 };

int N, M;
int arr[n][n];
int visited[n][n];
int cpy[n][n];
int x, x2, x3, y, y2, y3;
int SA = INT_MIN;

vector<pair<int, int>> v;
vector<vector<int>> cb;
vector<int> tmp;

void combi(int s, vector<int> b)
{
	if (b.size() == wall)
	{
		cb.push_back(b);
		return;
	}

	for (int i = s + 1; i < v.size(); i++)
	{
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
	return;
}

void DFS(int y, int x)
{
	visited[y][x] = 1;
	cpy[y][x] = 2;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
		if (visited[ny][nx] == 0 && cpy[ny][nx] == 0)
		{
			DFS(ny, nx);
		}
	}
}

int SafeArea()
{
	int ret = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (cpy[i][j] == 0)
				ret++;
		}
	}
	return ret;
}

int main(void)
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 0)
			{
				v.push_back({ i, j });
			}
		}
	}
	combi(-1, tmp);

	for (int i = 0; i < cb.size(); i++)
	{
		memcpy(cpy, arr, sizeof(arr));
		memset(visited, 0, sizeof(visited));

		y = v[cb[i][0]].first;
		x = v[cb[i][0]].second;
		
		y2 = v[cb[i][1]].first;
		x2 = v[cb[i][1]].second;

		y3 = v[cb[i][2]].first;
		x3 = v[cb[i][2]].second;

		cpy[y][x] = 1;
		cpy[y2][x2] = 1;
		cpy[y3][x3] = 1;
	
		for (int a = 0; a < N; a++)
		{
			for (int b = 0; b < M; b++)
			{
				if (cpy[a][b] == 2 && visited[a][b] == 0)
				{
					DFS(a, b);
				}
			}
		}

		int tmp = SafeArea();
		/*cout << "-----" << tmp << "--------\n";
		for (int a = 0; a < N; a++)
		{
			for (int b = 0; b < M; b++)
			{
				cout << cpy[a][b] << " ";
			}
			cout << "\n";
		}*/
		SA = max(tmp, SA);

	}
	cout << SA << "\n";
	return 0;
}