#include <bits/stdc++.h>

using namespace std;

bool in[100005];

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, x;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		v.push_back(t);
	}
	cin >> x;

	sort(v.begin(), v.end());

	int start = 0, end = n - 1;
	int cnt = 0;

	while (start < end)
	{
		if (v[start] + v[end] == x)
		{
			cnt++; end--;
		}
		else if (v[start] + v[end] < x) start++;
		else end--;
	}
	cout << cnt << "\n";

	return 0;
}
