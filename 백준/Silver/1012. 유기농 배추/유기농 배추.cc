#include <bits/stdc++.h>

using namespace std;

int T, M, N, K, X, Y, cnt;
int arr[52][52];
int visited[52][52];

const int dy[] = { -1,0,1,0 };
const int dx[] = { 0,1,0,-1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> T;
	while (T--)
	{
		memset(arr, 0, sizeof(arr));
		memset(visited, 0, sizeof(visited));
		cnt = 0;

		cin >> M >> N >> K;

		for (int i = 0; i < K; i++)
		{
			cin >> X >> Y;

			arr[Y][X] = 1;
		}

		stack<pair<int, int>> s;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (arr[i][j] == 1 && visited[i][j] == 0)
				{
					cnt++;
					s.push({ i,j });

					while (!s.empty())
					{
						int y = s.top().first;
						int x = s.top().second;
						s.pop();
						visited[y][x] = cnt;

						for (int k = 0; k < 4; k++)
						{
							int ny = y + dy[k];
							int nx = x + dx[k];

							if (ny < 0 || nx < 0 || ny > N || nx > M) continue;
							if (arr[ny][nx] == 0 || visited[ny][nx] != 0) continue;
							s.push({ ny, nx });
						}
					}
				}
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}