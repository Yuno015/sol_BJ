#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N, M;
	int i, j;
	int* arr;

	cin >> N >> M;
	arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = i+1;
	}

	while (M--)
	{
		cin >> i >> j;
		int temp;
		temp = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = temp;
	}

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[] arr;
	return 0;
}