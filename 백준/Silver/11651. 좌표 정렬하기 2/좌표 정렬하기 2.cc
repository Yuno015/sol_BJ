#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int x, y;
	vector<pair<int, int>> vec;

	while (N--)
	{
		cin >> x >> y;
		vec.push_back(make_pair(x, y));
	}
	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i].first << " " << vec[i].second << "\n";
	}

	return 0;
}

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
	if (a.second == b.second)
		return a.first < b.first;
	
	else
		return a.second < b.second;
}