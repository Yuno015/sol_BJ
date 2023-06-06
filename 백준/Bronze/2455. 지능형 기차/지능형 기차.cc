#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sum = 0;
	int max = -1;

	for (int i = 0; i < 4; i++)
	{
		int in, out;
		cin >> out >> in;

		sum -= out;
		sum += in;
		if (sum > max)
			max = sum;
	}

	cout << max << "\n";

	return 0;
}