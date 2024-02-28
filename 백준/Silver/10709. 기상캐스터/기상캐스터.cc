#include <bits/stdc++.h>

using namespace std;

char arr[104][204];
int ret[104][204];

int main(void)
{
	int H, W;
	cin >> H >> W;

	int cnt = 1;

	memset(ret, -1, sizeof(ret));

	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 'c') ret[i][j] = 0;
		}
	}

	for (int n = 0; n < W; n++)
	{
		for (int i = 0; i < H; i++)
		{
			for (int j = W - 1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = '.';

			for (int j = 0; j < W; j++)
			{
				if (arr[i][j] == 'c' && ret[i][j] == -1)
				{
					ret[i][j] = cnt;
				}
			}
		}
		cnt++;
	}

	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cout << ret[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}