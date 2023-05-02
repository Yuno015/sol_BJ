#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(const pair<int,string> &a, const pair<int, string> &b);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int age;
	string temp;
	vector<pair<int, string>> arr;
	while (N--)
	{
		cin >> age >> temp;
		arr.push_back(make_pair(age, temp));
	}

	stable_sort(arr.begin(), arr.end(), compare);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i].first << " " << arr[i].second << "\n";
	}

	return 0;
}

bool compare(const pair<int, string> &a, const pair<int, string> &b)
{
	return a.first < b.first;
}