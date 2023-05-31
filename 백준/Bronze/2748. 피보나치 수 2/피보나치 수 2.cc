#include <bits/stdc++.h>

using namespace std;

long long arr[100];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i < 92; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	int n;
	cin >> n;
	cout << arr[n] << "\n";
	return 0; 
}
