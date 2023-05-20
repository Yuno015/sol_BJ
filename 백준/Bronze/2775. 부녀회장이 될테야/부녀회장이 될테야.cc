#include <bits/stdc++.h>

using namespace std;


int arr[16][16] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14, };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int T;
	cin >> T;

	for (int i = 1; i <= 14; i++)
	{
		for (int j = 1; j <= 14; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}


	while (T--)
	{
		int n, k;
		cin >> n >> k;

		cout << arr[n][k] << "\n";
	}
	return 0;
}