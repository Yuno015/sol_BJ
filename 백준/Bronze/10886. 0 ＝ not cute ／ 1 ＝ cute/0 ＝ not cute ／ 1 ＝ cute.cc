#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	int zero = 0;
	int one = 0;
	while (N--)
	{
		int temp;
		cin >> temp;

		if (temp == 1)
			one++;
		else
			zero++;
	}

	if (one > zero)
	{
		cout << "Junhee is cute!\n";
	}
	else
		cout << "Junhee is not cute!\n";
	return 0;
}
