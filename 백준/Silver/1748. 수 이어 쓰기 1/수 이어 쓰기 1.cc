#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	int i = 1;
	int ans = 0;
	int k = 1;
	while (1)
	{
		if (N >= i*9)
		{
			N -= i * 9;
			ans += i * 9 * (log10(i) + 1);
		}
		else
		{
			ans += N * (log10(i) + 1);
			break;
		}
		i *= 10;
		k++;
	}
	cout << ans << "\n";
	return 0;
}
