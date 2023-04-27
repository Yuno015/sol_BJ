#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N;

	cin >> N;

	vector<int> vec;

	while (N >= 2)
	{
		for (int i = 2; i <= N; i++)
		{
			if (N % i == 0)
			{
				vec.push_back(i);
				N /= i;
				break;
			}
		}
	}

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	return 0;
}
