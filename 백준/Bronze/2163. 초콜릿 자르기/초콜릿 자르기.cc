#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;

	int n = N - 1;
	int m = N * (M - 1);

	cout << n + m << "\n";
	return 0; 
}
