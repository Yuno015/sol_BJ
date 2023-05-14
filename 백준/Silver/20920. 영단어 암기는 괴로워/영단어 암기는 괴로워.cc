#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<string, int>& p1, const pair<string, int>& p2)
{
	if (p1.second == p2.second)
	{
		if (p1.first.length() == p2.first.length())
		{
			return p1.first < p2.first;
		}
		else
			return p1.first.length() > p2.first.length();
	}
	else
		return p1.second > p2.second;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	
	unordered_map<string, int> mp;
	while (N--)
	{
		string temp;
		cin >> temp;

		if (temp.length() < M)
			continue;
		else
		{
			auto iter = mp.find(temp);
			if (iter != mp.end())
			{
				iter->second += 1;
			}
			else
			{
				mp.insert(make_pair(temp, 1));
			}
		}
	}
	vector<pair<string, int>> vec(mp.begin(), mp.end());
	sort(vec.begin(), vec.end(), cmp);
	for (auto it = vec.begin(); it != vec.end(); it++)
	{
		cout << it->first << "\n";
	}
	return 0;
}