#include <bits/stdc++.h>

using namespace std;

int arr[105];
int sum;

int main(void)
{
	int A, B, C;
	cin >> A >> B >> C;

	for (int i = 0; i < 3; i++)
	{
		int s, e;
		cin >> s >> e;

		for (int j = s; j < e; j++)
		{
			arr[j]++;
		}
	}

	for (int i = 1; i <= 100; i++)
	{
		if (arr[i] == 1) sum += A;
		else if (arr[i] == 2) sum += 2 * B;
		else if (arr[i] == 3) sum += 3 * C;
	}

	cout << sum;
	return 0;
}