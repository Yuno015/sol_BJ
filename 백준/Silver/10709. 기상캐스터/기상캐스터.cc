#include <bits/stdc++.h>

using namespace std;

char arr[102][102];
int visited[102][102];
int h, w;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> h >> w;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == '.')
				visited[i][j] = -1;
			else if (arr[i][j] == 'c')
				visited[i][j] = 0;
		}
	}

	int cnt = 0;
	while (1)
	{
		cnt++;
		if (cnt > w) break;
		for (int i = w - 1; i >= 0; i--)
		{
			for (int j = 0; j < h; j++)
			{
				if (i == 0) arr[j][i] = '.';
				else
				{
					arr[j][i] = arr[j][i - 1];

					if (visited[j][i] == -1 && arr[j][i] == 'c')
					{
						visited[j][i] = cnt;
					}
				}
			}
		}
	}

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << visited[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}