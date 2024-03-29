#include <bits/stdc++.h>

using namespace std;

int n, p, d;
long long sum = 0;

bool cmp(pair<int, int>& a, pair<int, int>& b)
{
	if (a.second == b.second)
		return a.first > b.first;
	return a.second > b.second;
}

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	if (n == 0)
	{
		cout << 0 << "\n";
		return 0;
	}
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
	{
		cin >> p >> d;
		v.push_back({ p,d });
	}

	sort(v.begin(), v.end(), cmp);
	
	priority_queue<long long> pq;
	int j = 0;
	for (int i = v[0].second; i > 0; i--)
	{
		while (j < n && v[j].second == i) pq.push(v[j++].first);
		if (pq.size())
		{
			sum += pq.top(); pq.pop();
		}
	}

	cout << sum << "\n";

	return 0;
}
