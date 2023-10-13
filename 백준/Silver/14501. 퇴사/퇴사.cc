#include <bits/stdc++.h>

using namespace std;

int N;
int t[16];
int p[16];
int dp[16];
int M;

int main(void)
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> t[i] >> p[i];
	}

	for (int i = 0; i <= N; i++)
	{
		dp[i] = max(M, dp[i]);
		if (i + t[i] <= N)
		{
			dp[i + t[i]] = max(dp[i + t[i]], p[i] + dp[i]);
		}
		M = max(M, dp[i]);
	}

	cout << M << "\n";

	return 0;
}