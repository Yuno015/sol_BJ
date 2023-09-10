#include <bits/stdc++.h>

using namespace std;

int N, K;
int coin[10];
int sum;
int ret;

int main(void)
{
	cin >> N >> K;
	
	for (int i = 0; i < N; i++)
	{
		cin >> coin[i];
	}

	while (1)
	{
		if (sum == K)
			break;

		for (int i = N - 1; i >= 0; i--)
		{
			if (coin[i] <= (K - sum))
			{
				sum += coin[i];
				break;
			}
		}
		ret++;
	}

	cout << ret << "\n";
	return 0;
}