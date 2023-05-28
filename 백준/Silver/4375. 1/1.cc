#include <bits/stdc++.h>

using namespace std;



int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	while (cin >> n)
	{
		int ans = 1;
		unsigned long long sum = 1;
		int k = 1;
		while (1)
		{
			if (sum % n == 0)
			{
				cout << ans << "\n";
				break;
			}
			k = (k * 10) % n;
			sum += k;
			ans++;
		}
	}

	return 0; 
}