#include <bits/stdc++.h>

using namespace std;

int N, M;
vector<string> v;
unordered_map<string, int> mp;

int main(void)
{
	cin >> N >> M;

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	for (int i = 1; i <= N; i++)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
		mp.insert({ temp, i });
	}

	for (int j = 0; j < M; j++)
	{
		string s;
		cin >> s;
		auto iter = mp.find(s);
		if (iter != mp.end()) cout << iter->second << "\n";
		else
		{
			int idx = stoi(s);
			cout << v[idx - 1] << "\n";
		}
	}
	return 0;
}