#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		sum += temp * temp;
	}

	cout << sum % 10 << "\n";
	return 0;
}