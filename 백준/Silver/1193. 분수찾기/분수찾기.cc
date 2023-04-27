#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	int i = 0;
	int temp = n;
	while (1)
	{
		++i;
		if (temp - i <= 0)
		{
			break;
		}
		temp -= i;
	}
	int sum = 0;
	for (int j = 1; j < i; j++)
	{
		sum += j;
	}
	int find = n - sum;
	if (i % 2 == 1)
	{
		cout << i + 1 - find << "/" << find << endl;
	}
	else
	{
		cout << find << "/" << i + 1- find << endl;
	}
	return 0;
}
