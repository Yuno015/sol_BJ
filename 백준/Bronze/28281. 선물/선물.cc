#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N, X;
	cin >> N >> X;

	vector<int> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	int sum = INT_MAX;
	for (int i = 0; i < N - 1; i++)
	{
		int temp = arr[i] + arr[i + 1];

		if (temp < sum)
			sum = temp;
	}

	cout << sum * X << "\n";
	return 0;
}
