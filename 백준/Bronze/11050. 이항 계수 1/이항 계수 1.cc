#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	if (M == 0)
		cout << 1 << "\n";
	else
	{
		int bj = 1;
		int bm = 1;
		for (int i = N; i > N - M; i--)
		{
			bj *= i;
		}
		for (int i = M; i > 0; i--)
		{
			bm *= i;
		}
		cout << bj / bm << "\n";
	}
	return 0;
}