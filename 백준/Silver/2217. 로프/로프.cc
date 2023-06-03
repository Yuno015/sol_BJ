#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	vector<int> arr;
	while (N--)
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	long long max = INT_MIN;

	sort(arr.begin(), arr.end());
	int size = arr.size();

	for (int i = 0; i < size; i++)
	{
		long long temp = arr[i] * (size - i);
		if (temp > max)
			max = temp;
	}

	cout << max << "\n";
	return 0; 
}
