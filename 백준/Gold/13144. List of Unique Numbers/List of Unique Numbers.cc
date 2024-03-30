#include <bits/stdc++.h>

using namespace std;

bool in[100005];

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		v.push_back(t);
	}
	int end = 0;
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		int j;
		for (j = end; j < n; j++)
		{
			if (in[v[j]] == 0) in[v[j]] = 1;
			else
			{
				end = j;
				break;
			}
		}
		if (j == n) end = j;
		sum += (end - i);
		in[v[i]] = 0;
	}

	cout << sum << "\n";
	return 0;
}
