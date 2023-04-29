#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N;
	int answer = 0;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		int sum = i;
		int temp = i;
		while (temp > 0)
		{
			sum += (temp % 10);
			temp /= 10;
		}
		if (sum == N)
		{
			answer = i;
			break;
		}
	}

	cout << answer << endl;
	return 0;
}