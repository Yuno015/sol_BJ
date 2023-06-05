#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long N;
	cin >> N;

	long long sum = 0;
	int cnt = 0;
	for (int i = 1; ; i++)
	{
		sum += i;
		cnt++;

		if (N - sum <= i)
			break;
	}
	cout << cnt << "\n";
	return 0; 
}