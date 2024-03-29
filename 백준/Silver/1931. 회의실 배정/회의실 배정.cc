#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<pair<int, int>> v;
	set<int> s;
	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back({ a, b });
	}

	sort(v.begin(), v.end(), cmp);
	int cnt = 1;
	int to = v[0].second;
	for (int i = 1; i < N; i++)
	{
		if (v[i].first >= to)
		{
			to = v[i].second;
			cnt++;
		}
	}

	cout << cnt << "\n";

	return 0;
}