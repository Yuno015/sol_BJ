#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int M, N;
	cin >> M >> N;

	int begin = round(sqrt(M));
	int end = round(sqrt(N));
	long long sum = 0;
	int cnt = 0;
	int min = INT_MAX;
	for (int i = begin; i <= end; i++)
	{
		if (i * i >= M && i * i <= N)
		{
			cnt++;
			sum += i * i;
			if (min > i * i)
			{
				min = i * i;
			}
		}
	}
	if (cnt > 0)
	{
		cout << sum << "\n" << min << "\n";
	}
	else
	{
		cout << -1 << "\n";
	}
	return 0;
}