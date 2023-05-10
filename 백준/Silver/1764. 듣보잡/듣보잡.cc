#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<string> noH;
	vector<string> noS;

	while (N--)
	{
		string temp;
		cin >> temp;
		noH.push_back(temp);
	}
	while (M--)
	{
		string temp;
		cin >> temp;
		noS.push_back(temp);
	}
	sort(noH.begin(), noH.end());
	sort(noS.begin(), noS.end());

	vector<string> ret;
	ret.resize(noH.size() + noS.size());
	auto it = set_intersection(noH.begin(), noH.end(), noS.begin(), noS.end(), ret.begin());
	ret.erase(it, ret.end());
	sort(ret.begin(), ret.end());

	cout << ret.size() << "\n";
	for (int i = 0; i < ret.size(); i++)
	{
		cout << ret[i] << "\n";
	}
	return 0;
}