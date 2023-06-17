#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		if (N == temp)
			cnt++;
	}

	cout << cnt << "\n";
	return 0;
}