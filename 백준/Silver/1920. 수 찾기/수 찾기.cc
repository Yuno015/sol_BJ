#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N;
	unordered_map<int, int> mp;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		mp.insert(make_pair(temp, 0));
	}

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int temp;
		cin >> temp;

		if (auto iter = mp.find(temp) != mp.end())
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}
	return 0;
}