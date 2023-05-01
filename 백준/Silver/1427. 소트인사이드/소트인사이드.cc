#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long N;
	vector<int> arr;
	cin >> N;

	while (N > 0)
	{
		int temp = N % 10;
		arr.push_back(temp);
		N /= 10;
	}

	sort(arr.rbegin(), arr.rend());

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i];
	}

	return 0;
}