#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;

	vector<int> arr;
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		int temp = (int)(str[i]-'0');
		arr.push_back(temp);
	}
	sort(arr.rbegin(), arr.rend());
	long long sum = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		sum += arr[i];
	}
	if (sum % 3 != 0 || arr[arr.size() - 1] != 0)
		cout << -1 << "\n";
	else
	{
		for (int i = 0; i < arr.size(); i++)
			cout << arr[i];
	}
	return 0; 
}