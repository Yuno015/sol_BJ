#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;

	int A = 0, B = 0, C = 0;
	bool isP = true;
	if (T >= 300)
	{
		A = T / 300;
		T %= 300;
	}
	if (T >= 60)
	{
		B = T / 60;
		T %= 60;
	}
	if (T % 10 != 0)
	{
		isP = false;
	}
	C = T / 10;

	if (isP)
	{
		cout << A << " " << B << " " << C << "\n";
	}
	else
		cout << -1 << "\n";
	return 0;
}