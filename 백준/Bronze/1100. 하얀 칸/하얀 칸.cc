#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char arr[8][8];
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 'F' && (i + j) % 2 == 0)
				cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}