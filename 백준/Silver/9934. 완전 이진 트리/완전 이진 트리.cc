#include <bits/stdc++.h>

using namespace std;

int K;
vector<int> ret[14];
int a[1030];

void go(int s, int e, int level)
{
	if (s > e) return;
	if (s == e)
	{
		ret[level].push_back(a[s]);
		return;
	}
	int mid = (s + e) / 2;
	ret[level].push_back(a[mid]);

	go(s, mid - 1, level + 1);
	go(mid + 1, e, level + 1);

	return;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);

	cin >> K;
	for (int i = 0; i < pow(2, K) - 1; i++)
	{
		cin >> a[i];
	}
	go(0, pow(2, K) - 1, 1);
	for (int i = 1; i <= K; i++)
	{
		for (int j : ret[i])
		{
			cout << j << " ";
		}
		cout << "\n";
	}
	return 0;
}