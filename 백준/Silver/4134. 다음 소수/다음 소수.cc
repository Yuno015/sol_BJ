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
	cin >> N;

	while (N--)
	{
		long long n;
		cin >> n;

		long long primeN;
		if (n <= 1)
			primeN = 2;
		else
		{
			for (long long i = n;; i++)
			{
				bool isPrime = true;
				int scope = sqrt(i);
				for (int j = 2; j <= scope; j++)
				{
					if (i % j == 0)
					{
						isPrime = false;
						break;
					}
				}
				if (isPrime == true)
				{
					primeN = i;
					break;
				}
			}
		}

		cout << primeN << "\n";
	}

	return 0;
}