#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	unordered_map<string, int> m;
	vector<string> v;
	for (int i = 1; i <= N; i++)
	{
		string temp;
		cin >> temp;
		m.insert({ temp, i });
		v.push_back(temp);
	}

	while (M--)
	{
		string temp;
		cin >> temp;

		auto iter = m.find(temp);
		if (iter != m.end())
		{
			cout << iter->second << "\n";
		}
		else
		{
			int n = stoi(temp);
			cout << v[n - 1] << "\n";
		}
	}
	return 0;
}