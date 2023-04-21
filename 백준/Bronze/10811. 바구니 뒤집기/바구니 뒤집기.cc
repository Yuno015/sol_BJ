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
		if (i != j)
		{
			int len = j - i + 1;
			int* temp = new int[len];

			for (int a = 0; a < len; a++)
			{
				temp[a] = arr[i - 1 + a];
			}

			for (int a = 0; a < len; a++)
			{
				arr[i - 1 + a] = temp[len - 1 - a];
			}

			delete[] temp;
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;
	return 0;
}