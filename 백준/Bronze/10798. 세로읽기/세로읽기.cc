#include <iostream>

using namespace std;

int main(void)
{
	char arr[5][15];
	string temp;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			arr[i][j] = '*';
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cin >> temp;
		int len = temp.length();

		for (int j = 0; j < len; j++)
		{
			arr[i][j] = temp[j];
		}
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if(arr[j][i] != '*')
				cout << arr[j][i];
		}
	}
	return 0;
}
