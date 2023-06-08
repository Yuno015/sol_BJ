#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;

	unordered_map<string, string> mp;
	for (int i = 0; i < N; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		mp.insert(make_pair(s1, s2));
	}
	for (int i = 0; i < M; i++)
	{
		string s;
		cin >> s;
		cout << mp.find(s)->second << "\n";
	}
	return 0;
}