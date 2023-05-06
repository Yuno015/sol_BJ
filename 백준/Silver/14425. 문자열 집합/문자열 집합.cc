#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	set<string> s;
	vector<string> v;
	while (N--)
	{
		string temp;
		cin >> temp;
		s.insert(temp);
	}
	while (M--)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
	}

	int cnt = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (s.count(v[i]) == 1)
			cnt++;
	}
	cout << cnt << "\n";
	return 0;
}