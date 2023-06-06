#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<long long, int> a, pair<long long, int> b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second > b.second;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	unordered_map<long long, int> mp;
	while (N--)
	{
		long long temp;
		cin >> temp;

		auto iter = mp.find(temp);
		if (iter != mp.end())
			iter->second++;
		else
			mp.insert(make_pair(temp, 1));
	}
	vector<pair<long long, int>> arr(mp.begin(), mp.end());

	sort(arr.begin(), arr.end(), cmp);
	cout << arr[0].first << "\n";
	return 0; 
}