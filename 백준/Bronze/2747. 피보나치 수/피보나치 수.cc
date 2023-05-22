#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int arr[50] = { 0, 1, };

	for (int i = 2; i < 47; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	int n;
	cin >> n;

	cout << arr[n] << "\n";
	return 0;
}