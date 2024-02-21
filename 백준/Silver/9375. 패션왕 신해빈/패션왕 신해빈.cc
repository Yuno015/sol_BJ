#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		map<string, int> mp;
		for (int i = 0; i < n; i++)
		{
			string a, b;
			cin >> a >> b;
			auto iter = mp.find(b);
			if (iter != mp.end()) iter->second++;
			else mp.insert({ b, 1 });
		}

		int ret = 1;
		for (auto iter = mp.begin(); iter != mp.end(); iter++)
		{
			ret *= (iter->second) + 1;
		}

		cout << ret - 1 << '\n';
	}
	return 0;
}