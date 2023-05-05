#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>

using namespace std;

const int SCOPE = 1000001;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	bool primes[SCOPE];
	memset(primes, 1, sizeof(primes));
	primes[0] = false;
	primes[1] = false;
	int temp = sqrt(SCOPE);

	for (int i = 2; i < temp; i++)
	{
		for (int j = i + i; j < SCOPE; j += i)
		{
			primes[j] = false;
		}
	}

	while (T--)
	{
		int N;
		cin >> N;

		int cnt = 0;
		for (int i = 2; i <= N / 2; i++)
		{
			if (primes[i] && primes[N - i])
				cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}