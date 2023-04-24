#include <iostream>

using namespace std;

int main(void)
{
	int arr[9][9];
	int max = -1;
	int x = 0, y = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			int temp;
			cin >> temp;
			if (temp > max)
			{
				max = temp;
				x = j + 1;
				y = i + 1;
			}
		}
	}

	cout << max << endl;
	cout << y << " " << x << endl;

	return 0;
}
