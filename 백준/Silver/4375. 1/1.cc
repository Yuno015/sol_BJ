#include <bits/stdc++.h>

using namespace std;

int n;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	while (cin >> n)
	{
		long long sum = 1;
		long long before = 1;
		int cnt = 1;

		while (1)
		{
			if (sum % n == 0)
			{
				cout << cnt << "\n";
				break;
			}

			before = (before * 10) % n;
			sum += before;
			sum %= n;
			cnt++;
		}
	}
	
	return 0;
}