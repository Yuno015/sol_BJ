#include <bits/stdc++.h>

using namespace std;

int arr[102][102];
int visited[102][102];
int m, n, k;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> m >> n >> k;

	for (int i = 0; i < k; i++)
	{
		int x, y, xx, yy;

		cin >> x >> y >> xx >> yy;

		for (int j = y; j < yy; j++)
		{
			for (int k = x; k < xx; k++)
			{
				arr[j][k] = 1;
			}
		}
	}

	vector<int> result;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 0 && visited[i][j] == 0)
			{
				int cnt = 1;
				queue<pair<int, int>> q;
				q.push({ i, j });
				visited[i][j] = cnt;

				while (!q.empty())
				{
					int y = q.front().first;
					int x = q.front().second;
					q.pop();

					for (int k = 0; k < 4; k++)
					{
						int ny = y + dy[k];
						int nx = x + dx[k];

						if (ny < 0 || nx < 0 || ny >= m || nx >= n) continue;
						if (arr[ny][nx] != 0 || visited[ny][nx] != 0) continue;
						cnt++;
						q.push({ ny, nx });
						visited[ny][nx] = cnt;
					}
				}
				result.push_back(cnt);
			}
		}
	}

	sort(result.begin(), result.end());

	cout << result.size() << "\n";
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
	cout << "\n";

	return 0;
}