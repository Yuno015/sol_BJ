#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int answer[6] = { 1, 1, 2, 2, 2, 8 };
	int arr[6];

	for (int i = 0; i < 6; i++)
	{
		int temp;
		cin >> temp;
		arr[i] = temp;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << answer[i] - arr[i] << " ";
	}
	return 0;
}
