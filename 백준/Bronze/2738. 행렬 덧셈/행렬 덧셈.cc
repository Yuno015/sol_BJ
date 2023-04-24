#include <iostream>

using namespace std;

int main(void)
{
	int N, M;

	cin >> N >> M;

	int arrSize = N * M;
	int* arrA = new int[arrSize];

	for (int i = 0; i < arrSize; i++)
	{
		int temp;
		cin >> temp;
		arrA[i] = temp;
	}
	for (int i = 0; i < arrSize; i++)
	{
		int temp;
		cin >> temp;
		arrA[i] += temp;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << arrA[i * M + j] << " ";
		}
		cout << endl;
	}

	delete[] arrA;

	return 0;
}
