#include <bits/stdc++.h>

using namespace std;

const int n = 101;
char arr[n][n];
int result[n][n];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int H, W;
	cin >> H >> W;

	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < H; i++)
	{
		if (arr[i][0] == 'c')
			result[i][0] = 0;
		else if (arr[i][0] == '.')
			result[i][0] = -1;

		for (int j = 1; j < W; j++)
		{
			if (arr[i][j] == 'c')
				result[i][j] = 0;
			else
			{
				result[i][j] = -1;
				for (int k = j - 1; k >= 0; k--)
				{
					if (arr[i][k] == 'c' && result[i][j] == -1)
						result[i][j] = (j - k);
				}
			}
		}
	}

	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cout << result[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}