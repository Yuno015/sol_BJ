#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<string> v;
	set<string> s;
	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
	}
	for (int i = 0; i < M; i++)
	{
		string temp;
		cin >> temp;
		s.insert(temp);
	}

	sort(v.begin(), v.end());
	vector<string> result;
	for (int i = 0; i < v.size(); i++)
	{
		if (s.find(v[i]) != s.end())
			result.push_back(v[i]);
	}

	cout << result.size() << "\n";
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << "\n";
	}
	return 0;
}