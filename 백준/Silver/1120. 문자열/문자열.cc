#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string A, B;
	cin >> A >> B;

	int lenA = A.length();
	int lenB = B.length();

	int ret = 0;
	if (lenA == lenB)
	{
		
		for (int i = 0; i < lenA; i++)
		{
			if (A[i] != B[i])
				ret++;
		}
	}
	else
	{
		ret = lenA;
		for (int i = 0; i <= lenB - lenA; i++)
		{
			int temp = 0;
			for (int j = 0; j < lenA; j++)
			{
				if (A[j] != B[i + j])
				{
					temp++;
				}
			}
			if (ret > temp)
				ret = temp;
		}
	}

	cout << ret << "\n";
	return 0;
}