#include <bits/stdc++.h>

using namespace std;

int arr[100005];

int main(void)
{
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}

	int max = INT_MIN;

	for (int i = k; i <= n; i++)
	{
		int tmp = arr[i] - arr[i - k];
		if (tmp > max) max = tmp;
	}

	cout << max;
	return 0;
}