#include <bits/stdc++.h>

using namespace std;

int M, N, J;

int main(void)
{
	cin >> N >> M;
	cin >> J;

	int idx = 1;
	int cnt = 0;

	for (int i = 0; i < J; i++)
	{
		int f;
		cin >> f;

		if (f >= idx && f < idx + M)
			continue;
		if (f < idx)
		{
			cnt += idx - f;
			idx = f;
		}
		else if (f >= idx + M)
		{
			cnt += f - (idx + M) + 1;
			idx = f - M + 1;
		}
	}

	cout << cnt << "\n";
	return 0;
}