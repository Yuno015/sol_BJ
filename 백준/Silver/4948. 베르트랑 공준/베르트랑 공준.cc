#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	while (1)
	{
		cin >> N;

		if (N == 0)
			break;

		int cnt = 0;
		for (int i = N + 1; i <= 2 * N; i++)
		{
			int temp = sqrt(i);
			bool isPrime = true;
			if (i == 1)
				isPrime = false;
			else
			{
				for (int j = 2; j <= temp; j++)
				{
					if (i % j == 0)
					{
						isPrime = false;
						break;
					}
				}
			}
			if (isPrime == true)
				cnt++;
		}
		cout << cnt << "\n";
	}

	return 0;
}