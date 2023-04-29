#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N, M;
	vector<int> vec;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}

	int max = 0;
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				int sum = vec[i] + vec[j] + vec[k];
				if (sum <= M && (M - sum) < (M - max))
				{
					max = sum;
				}
			}
		}
	}

	cout << max << endl;
	return 0;
}