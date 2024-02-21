#include <bits/stdc++.h>

using namespace std;

string arr[100004];

int main(void)
{
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	map<string, int> mp;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		mp.insert({ s, i + 1 });
		arr[i + 1] = s;
	}

	for (int i = 0; i < M; i++)
	{
		string s;
		cin >> s;

		int x = atoi(s.c_str());
		if (x == 0) cout << mp[s] << '\n';
		else cout << arr[x] << '\n';
	}

	return 0;
}