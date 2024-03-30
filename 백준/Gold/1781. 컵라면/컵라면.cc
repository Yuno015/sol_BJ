#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;

	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
	{
		int d, r;
		cin >> d >> r;
		v.push_back({ d, r });
	}
	sort(v.begin(), v.end());

	long long sum = 0;
	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 0; i < n; i++)
	{
		pq.push(v[i].second);

		if (pq.size() > v[i].first) pq.pop();
	}

	while (pq.size())
	{
		sum += pq.top(); pq.pop();
	}

	cout << sum << "\n";
	return 0;
}
