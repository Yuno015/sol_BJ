#include <iostream>
#include <vector>

using namespace std;

const int NUM = 28;

int main(void)
{
	bool arr[30] = { false, };
	int temp;

	for (int i = 0; i < NUM; i++)
	{
		cin >> temp;
		arr[temp - 1] = true;
	}

	for (int i = 0; i < 30; i++)
	{
		if (arr[i] == false)
			cout << i + 1 << endl;
	}
	return 0;
}