#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	while (N--)
	{
		int n;
		cin >> n;

		unordered_map<string, int> mp;
		while (n--)
		{
			string name, category;
			cin >> name >> category;
			if (mp.find(category) != mp.end())
			{
				auto iter = mp.find(category);
				iter->second++;
			}
			else
			{
				mp.insert(make_pair(category, 1));
			}
		}
		vector<pair<string, int>> arr(mp.begin(), mp.end());
		long long result = 1;
		for (int i = 0; i < arr.size(); i++)
		{
			result *= (arr[i].second + 1);
		}

		cout << result - 1 << "\n";
	}
	return 0;
}