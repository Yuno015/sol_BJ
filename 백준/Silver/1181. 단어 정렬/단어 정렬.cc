#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(const string a, const string b);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	string temp;
	vector<string> arr;
	while (N--)
	{
		cin >> temp;
		arr.push_back(temp);

	}
	sort(arr.begin(), arr.end(), compare);
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\n";
	}

	return 0;
}

bool compare(const string a, const string b)
{
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}