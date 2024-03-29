#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b)
{
	return a.first < b.first;
}

int main(void)
{
	int N;
	cin >> N;
	vector<pair<int, int>> v;

	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back({ a, b });
	}
	sort(v.begin(), v.end(), cmp);
	int begin = v[0].first;
	int end = 0;
	for (int i = 0; i < N; i++)
	{
		if (end <= v[i].first)
		{
			end = v[i].first + v[i].second;
		}
		else
			end += v[i].second;
	}

	cout << end << "\n";
	return 0;
}