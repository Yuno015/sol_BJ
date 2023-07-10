#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	cin >> N;

	int sum = 0;
	while (N--)
	{
		int n;

		cin >> n;
		if (N > 0)
			sum += n - 1;
		else
			sum += n;
	}

	cout << sum << "\n";
	return 0;
}
