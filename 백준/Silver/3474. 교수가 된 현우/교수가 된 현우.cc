#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;
	
	while (T--)
	{
		long long N;
		cin >> N;

		long long tmp = 5;
		long long cnt = 0;
		while (N >= tmp)
		{
			cnt += (N / tmp);
			tmp *= 5;
		}

		cout << cnt << "\n";
	}
	return 0;
}