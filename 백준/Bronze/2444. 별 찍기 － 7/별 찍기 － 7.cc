#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n - 1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < 2 * n - 1; i++)
	{
		cout << "*";
	}
	cout << endl;
	
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2* (n - 1 - i) - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
