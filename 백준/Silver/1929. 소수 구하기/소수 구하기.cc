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

	int M, N;
	cin >> M >> N;
	
	for (int i = M; i <= N; i++)
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
			cout << i << "\n";
	}

	return 0;
}