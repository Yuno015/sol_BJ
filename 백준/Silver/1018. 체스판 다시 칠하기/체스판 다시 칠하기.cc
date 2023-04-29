#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N, M;
	char arr[51][51];
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			char temp;
			cin >> temp;
			arr[i][j] = temp;
		}
	}

	int min = N * M;
	for (int i = 0; i <= N - 8; i++)
	{
		for (int j = 0; j <= M - 8; j++)
		{
			int tempB = 0;
			int tempW = 0;
			
			for (int a = 0; a < 8; a++)
			{
				for (int b = 0; b < 8; b++)
				{
					if ((a + b) % 2 == 0 && arr[i + a][j + b] == 'W')
						tempB++;
					else if ((a + b) % 2 == 1 && arr[i + a][j + b] == 'B')
						tempB++;
					else if ((a + b) % 2 == 0 && arr[i + a][j + b] == 'B')
						tempW++;
					else if ((a + b) % 2 == 1 && arr[i + a][j + b] == 'W')
						tempW++;
				}
			}
			int temp = (tempB > tempW) ? tempW : tempB;
			if (temp < min)
				min = temp;
		}
	}

	cout << min << endl;
	return 0;
}