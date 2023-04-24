#include <iostream>

using namespace std;

int main(void)
{
	int arr[100][100];

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			arr[i][j] = 0;
		}
	}

	int n;
	cin >> n;

	while (n--)
	{
		int x, y;
		cin >> x >> y;
		for (int i = x; i < x + 10; i++)
		{
			for (int j = y; j < y + 10; j++)
			{
				arr[j][i]++;
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i][j] != 0)
				sum++;
		}
	}
	cout << sum << endl;
	return 0;
}
