#include <bits/stdc++.h>

using namespace std;

int N;

int main(void)
{
	cin >> N;
	if (N % 5 == 0)
	{
		cout << N / 5 << "\n";
		return 0;
	}

	int ret = -1;
	int cnt = N / 5;
	while (1)
	{
		int temp = N - cnt * 5;
		if (temp % 3 == 0)
		{
			ret = cnt + temp / 3;
			break;
		}
		if (cnt == 0) break;
		cnt--;
	}

	cout << ret;

	return 0;
}