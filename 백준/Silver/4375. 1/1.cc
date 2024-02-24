#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	while (cin >> n)
	{
		long long sum = 1;
		int cnt = 1;
		long long before = 1;
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