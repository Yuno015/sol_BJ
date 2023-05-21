#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	
	int arr[9] = { 0, };
	while (n > 0)
	{
		int temp;
		temp = n % 10;
		if (temp == 9)
			temp = 6;
		arr[temp]++;
		n /= 10;
	}

	int max = -1;
	for (int i = 0; i < 9; i++)
	{
		int temp = arr[i];
		if (i == 6 && i > 1)
			temp = (temp + 1) / 2;
		if (temp > max)
			max = temp;
	}
	cout << max << "\n";
	return 0;
}