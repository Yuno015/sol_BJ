#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int K, N, M;
	cin >> K >> N >> M;

	int result = K * N - M;
	if (result <= 0)
	{
		result = 0;
	}
	cout << result << "\n";
	return 0;
}