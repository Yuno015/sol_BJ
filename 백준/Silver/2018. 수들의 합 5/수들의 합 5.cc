#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	cin >> N;

	int cnt = 0;
	for (int i = N; i > 0; i--)
	{
		int sum = 0;
		for (int j = i; j > 0; j--)
		{
			if (sum >= N)
				break;

			sum += j;
		}
		if (sum == N)
			cnt++;
	}

	cout << cnt << "\n";
	return 0;
}
