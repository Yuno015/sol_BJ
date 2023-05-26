#include <bits/stdc++.h>

using namespace std;

int arr[105];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int A, B, C;
	cin >> A >> B >> C;

	for (int i = 0; i < 3; i++)
	{
		int a, l;
		cin >> a >> l;
		for (int j = a; j < l; j++)
		{
			arr[j]++;
		}
	}

	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (arr[i] == 1)
			sum += (arr[i] * A);
		else if (arr[i] == 2)
			sum += (arr[i] * B);
		else if (arr[i] == 3)
			sum += (arr[i] * C);
	}

	cout << sum << "\n";

	return 0;
}