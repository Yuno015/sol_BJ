#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int L, P;
	cin >> L >> P;

	for (int i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		cout << temp - L * P << " ";
	}
	return 0;
}
