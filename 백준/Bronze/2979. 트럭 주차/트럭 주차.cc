#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int A, B, C;
	int arr[105];
	int sum = 0;

	memset(arr, 0, sizeof(arr));

	cin >> A >> B >> C;

	for (int i = 0; i < 3; i++)
	{
		int in, out;
		cin >> in >> out;

		for (int j = in; j < out; j++)
		{
			arr[j]++;
		}
	}

	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == 1) sum += A;
		else if (arr[i] == 2) sum += (2 * B);
		else if (arr[i] == 3) sum += (3 * C);
	}

	cout << sum << '\n';
	return 0;
}