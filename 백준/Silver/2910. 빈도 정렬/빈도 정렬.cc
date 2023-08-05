#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<int, pair<int, int>>& a, const pair<int, pair<int, int>>& b)
{
	if (a.second.first == b.second.first)
	{
		return a.second.second < b.second.second;
	}
	return a.second.first > b.second.first;
}

int main(void)
{
	int N, C;
	cin >> N >> C;

	unordered_map<int, pair<int, int>> mp;
	
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;

		auto iter = mp.find(temp);
		if (iter != mp.end())
		{
			iter->second.first++;
		}
		else
		{
			mp.insert(make_pair(temp, make_pair(1, i)));
		}
	}
	vector<pair<int, pair<int, int>>> arr(mp.begin(), mp.end());
	sort(arr.begin(), arr.end(), cmp);

	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].second.first; j++)
		{
			cout << arr[i].first << " ";
		}
	}
	return 0;
}