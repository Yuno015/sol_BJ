#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	cin >> N;

	vector<pair<pair<int, int>, int>> v;
	
	while (N--)
	{
		int w, h;
		cin >> w >> h;

		v.push_back(make_pair(make_pair(w, h), 1));
	}

	for (int i = 0; i < v.size(); i++)
	{
		int cnt = 1;
		for (int j = 0; j < v.size(); j++)
		{
			if (v[i].first.first < v[j].first.first && v[i].first.second < v[j].first.second)
			{
				cnt++;
			}
		}
		v[i].second = cnt;
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].second << " ";
	}
	return 0;
}