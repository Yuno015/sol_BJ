#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> arr;
	while (n--)
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	int size = arr.size();
	int result = 0;
	if (size % 2 == 0)
	{
		result = arr[0] * arr[size - 1];
	}
	else
	{
		result = arr[size / 2] * arr[size / 2];
	}
	cout << result << "\n";
	return 0;
}