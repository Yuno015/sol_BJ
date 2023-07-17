#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string, int>&a, pair<string, int>&b)
{
	return a.first < b.first;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	cin >> N;

	unordered_map<string, int> mp;

	while (N--)
	{
		string tmp;
		cin >> tmp;
		int pos = tmp.find(".");
		string ext = tmp.substr(pos + 1, tmp.length());

		auto it = mp.find(ext);
		if (it != mp.end())
		{
			it->second++;
		}
		else
		{
			mp.insert({ ext, 1 });
		}
	}

	vector<pair<string, int>> arr(mp.begin(), mp.end());
	sort(arr.begin(), arr.end(), cmp);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i].first << " " << arr[i].second << "\n";
	}
	return 0;
}
