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
	int two = 0;
	int five = 0;

	arr.push_back(0);
	arr.push_back(0);
	for (int i = 2; i <= N; i++)
	{
		int temp = i;
		while (1)
		{
			if (temp % 2 != 0)
				break;
			temp /= 2;
			two++;
		}
		while (1)
		{
			if (temp % 5 != 0)
				break;
			temp /= 5;
			five++;
		}
		two > five ? arr.push_back(five) : arr.push_back(two);
	}

	cout << arr[N] << "\n";
	return 0; 
}
