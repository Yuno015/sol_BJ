#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long N;
	cin >> N;

	long long n = N - 2;

	cout << (n*n*n + 3*n*n +2*n)/6 << "\n" << 3 << "\n";
	return 0;
}