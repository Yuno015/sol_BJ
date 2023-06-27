#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int A, B;
	cin >> A >> B;

	vector<int> arr;

	for (int i = 1; i < 50; i++)
	{
		for (int j = 0; j < i; j++)
		{
			arr.push_back(i);
		}
	}

	long long sum = 0;
	for (int i = A - 1; i < B; i++)
	{
		sum += arr[i];
	}
	
	cout << sum << "\n";
	return 0;
}