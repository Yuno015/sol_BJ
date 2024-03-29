#include <bits/stdc++.h>

using namespace std;

int n, p, d;
long long sum = 0;

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
		v.push_back({ d, p });
	}
	
	sort(v.begin(), v.end());
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < n; i++)
	{
		pq.push(v[i].second);
		if (pq.size() > v[i].first) pq.pop();
	}

	while (pq.size())
	{
		sum += pq.top();
		pq.pop();
	}

	cout << sum << "\n";

	return 0;
}
