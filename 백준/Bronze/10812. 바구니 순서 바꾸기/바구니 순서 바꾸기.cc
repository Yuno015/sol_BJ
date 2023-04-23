#include <iostream>
#include <string>

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
		arr[i] = i + 1;
	}

	while (M--)
	{
		cin >> i >> j >> k;
		
		int len = j - i + 1;
		int x = 0, y = 0, a = 0;
		int* temp = new int[len];
		for (x = k - 1, a = 0; x < j; x++)
		{
			temp[a] = arr[x];
			a++;
		}
		for (int z = a, y = i - 1; y < k - 1; y++)
		{
			temp[z] = arr[y];
			z++;
		}
		for (int z = 0; z < len; z++)
		{
			arr[i - 1 + z] = temp[z];
		}
		
		delete[] temp;
	}
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
