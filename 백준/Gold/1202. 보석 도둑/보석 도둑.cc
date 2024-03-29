#include <bits/stdc++.h>

using namespace std;

int n, k;
long long sum = 0;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;

	vector<pair<int, int>> bs;
	vector<int> bag;

	for (int i = 0; i < n; i++)
	{
		int m, v;
		cin >> m >> v;
		bs.push_back({ m, v });
	}
	for (int i = 0; i < k; i++)
	{
		int c;
		cin >> c;
		bag.push_back(c);
	}

	sort(bs.begin(), bs.end());
	sort(bag.begin(), bag.end());
	priority_queue<long long> pq;

	int j = 0;
	for (int i = 0; i < k; i++)
	{
		while (j < n && bag[i] >= bs[j].first) pq.push(bs[j++].second);
		if (pq.size())
		{
			sum += pq.top(); pq.pop();
		}
	}

	cout << sum << "\n";
	return 0;
}
