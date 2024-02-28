#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
	int T;
	cin >> T;

	while (T--)
	{
		int tmp;
		cin >> tmp;

		int cnt = 0;
		while (1)
		{
			if (tmp == 0) break;
			cnt += (tmp / 5);
			tmp /= 5;
		}
		cout << cnt << "\n";
	}

	return 0;
}