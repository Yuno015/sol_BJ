#include <bits/stdc++.h>

using namespace std;

int t, n;
int arr[10005];

int main(void)
{
	cin >> t;

	memset(arr, 0, sizeof(arr));
	arr[0] = 1;

	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 10000; j++)
		{
			if (j - i >= 0) arr[j] += arr[j - i];
		}
	}


	while (t--)
	{
		cin >> n;
		cout << arr[n] << "\n";
	}
	return 0;
}