#include <bits/stdc++.h>

using namespace std;

const int n = 54;
char arr[n][n];
int visited[n][n];
int M, N;
int ret = INT_MIN;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int main(void)
{
	cin >> M >> N;
	cin.ignore();

	for (int i = 0; i < M; i++)
	{
		string temp;
		getline(cin, temp);
		for (int j = 0; j < temp.size(); j++)
		{
			arr[i][j] = temp[j];
		}
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i][j] == 'L')
			{
				int temp = -1;
				memset(visited, 0, sizeof(visited));
				queue<pair<int, int>> q;

				q.push({ i, j });
				visited[i][j] = 1;

				while (q.size())
				{
					int y = q.front().first;
					int x = q.front().second;
					q.pop();

					for (int k = 0; k < 4; k++)
					{
						int ny = y + dy[k];
						int nx = x + dx[k];

						if (ny < 0 || nx < 0 || ny >= M || nx >= N) continue;
						if (arr[ny][nx] == 'L' && visited[ny][nx] == 0)
						{
							visited[ny][nx] = visited[y][x] + 1;
							q.push({ ny, nx });
						}
					}
				}

				for (int a = 0; a < M; a++)
				{
					for (int b = 0; b < N; b++)
					{
						if (visited[a][b] > temp) temp = visited[a][b];
					}
				}

				ret = max(ret, temp);
			}
		}
	}

	cout << ret - 1 << "\n";

	return 0;
}