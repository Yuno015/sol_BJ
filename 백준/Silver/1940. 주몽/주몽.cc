#include <bits/stdc++.h>

using namespace std;

int N, M, ret;
vector<int> v;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());

	int f = 0, b = N - 1;
	while (f < b)
	{
		if (v[f] + v[b] == M)
		{
			ret++;
			f++; b--;
		}
		else if (v[f] + v[b] < M) f++;
		else if (v[f] + v[b] > M) b--;
	}

	cout << ret;
	return 0;
}