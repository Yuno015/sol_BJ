#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N;
	int cnt = 0;
	vector<int> vec;

	cin >> N;
	while (N--)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}

	for (int i = 0; i < vec.size(); i++)
	{
		int isPrime = 0;
		
		for (int j = 1; j <= vec[i]; j++)
		{
			if (vec[i] % j == 0)
				isPrime++;
		}
		if (isPrime == 2)
			cnt++;
	}

	cout << cnt << endl;
	return 0;
}
