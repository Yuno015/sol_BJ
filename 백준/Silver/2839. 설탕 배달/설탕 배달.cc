#include <bits/stdc++.h>

using namespace std;

int N;
int arr[5005];
int ret = INT_MAX;

int main(void)
{
	cin >> N;
	memset(arr, -1, sizeof(arr));
	arr[3] = 1; arr[5] = 1;

	for (int i = 6; i <= 5000; i++)
	{
		for (int j = i - 1; j > (i - 1) / 2; j--)
		{
			if (arr[j] == -1 || arr[i - j] == -1) continue;
			int temp = arr[j] + arr[i - j];
			if (arr[i] == -1) arr[i] = temp;
			else arr[i] = min(arr[i], temp);
		}
	}

	cout << arr[N] << "\n";
	return 0;
}