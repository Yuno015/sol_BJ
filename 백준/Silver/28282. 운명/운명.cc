#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int X, K;
	cin >> X >> K;

	vector<int> left(X);
	vector<int> right(K + 5);

	long long ans = 0;
	for (int i = 0; i < X; i++)
	{
		cin >> left[i];
	}
	for (int i = 0; i < right.size(); i++)
	{
		right[i] = 0;
	}
	for (int i = 0; i < X; i++)
	{
		int temp;
		cin >> temp;
		right[temp]++;
	}

	for (int i = 0; i < X; i++)
	{
		ans += (X - right[left[i]]);
	}

	cout << ans << "\n";
	return 0;
}
