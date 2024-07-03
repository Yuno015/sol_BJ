#include <bits/stdc++.h>

using namespace std;

int N, K;
int sum[100002];
int ret = INT_MIN;

int main(void)
{
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		int temp;
		cin >> temp;

		sum[i] = sum[i - 1] + temp;
	}

	for (int i = K; i <= N; i++)
	{
		int temp = sum[i] - sum[i - K];
		if (temp > ret) ret = temp;
	}

	cout << ret;
	return 0;
}