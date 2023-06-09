#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> arr;
	int sum = 0;
	int min = -1;
	for (int i = 0; i < 7; i++)
	{
		int temp;
		cin >> temp;
		if (temp % 2 != 0)
		{
			arr.push_back(temp);
			sum += temp;
		}
	}
	if (!arr.empty())
	{
		sort(arr.begin(), arr.end());
		min = arr[0];
		cout << sum << "\n";
	}
	cout << min << "\n";
	return 0;
}