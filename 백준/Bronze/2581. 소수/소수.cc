#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int M, N;
	cin >> M >> N;

	vector<int> vec;

	for (int i = M; i <= N; i++)
	{
		int isPrime = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				isPrime++;
		}
		if (isPrime == 2)
			vec.push_back(i);
	}
	int sum = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		sum += vec[i];
	}

	if (vec.empty())
		cout << -1 << endl;
	else
	{
		cout << sum << endl;
		cout << vec[0] << endl;
	}

	return 0;
}
