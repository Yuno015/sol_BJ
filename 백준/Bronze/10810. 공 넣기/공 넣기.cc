#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N, M;
	int i, j, k;
	int* arr;

	cin >> N >> M;
	arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = 0;
	}

	while (M--)
	{
		cin >> i >> j >> k;
		for (int a = i - 1; a < j; a++)
		{
			arr[a] = k;
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete arr;
	return 0;
}