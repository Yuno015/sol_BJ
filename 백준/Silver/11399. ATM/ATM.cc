#include <bits/stdc++.h>

using namespace std;

int N;
int ret;
int arr[1001];
int sum[1001];

int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);

	sum[0] = arr[0];
	ret += sum[0];
	for (int i = 1; i < N; i++)
	{
		sum[i] = sum[i - 1] + arr[i];
		ret += sum[i];
	}

	cout << ret << "\n";
	return 0;
}