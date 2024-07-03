#include <bits/stdc++.h>

using namespace std;

int T, n;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> T;

	while (T--)
	{
		cin >> n;
		int ret = 1;
		map<string, int> mp;
		for (int i = 0; i < n; i++)
		{
			string name, category;
			cin >> name >> category;

			mp[category]++;
		}
		for (auto iter = mp.begin(); iter != mp.end(); iter++)
		{
			ret *= (iter->second + 1);
		}
		cout << ret - 1 << "\n";
	}
	return 0;
}