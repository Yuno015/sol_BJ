#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
	return a.second > b.second;
}

int main(void)
{
	int N, C;
	cin >> N >> C;

	map<int, int> mp;
	vector<pair<int, int>> v;

	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;

		auto iter = mp.find(tmp);
		if (iter != mp.end())
		{
			iter->second++;
			for (int j = 0; j < v.size(); j++)
			{
				if (v[j].first == iter->first)
				{
					v[j].second++;
				}
			}
		}
		else
		{
			mp.insert({ tmp, 1 });
			v.push_back({ tmp, 1 });
		}
	}

	stable_sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].second; j++)
		{
			cout << v[i].first << " ";
		}
	}
	cout << "\n";
	return 0;
}