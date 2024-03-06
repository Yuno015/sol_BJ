#include <bits/stdc++.h>

using namespace std;

int arr[10001];

int sn(int n)
{
	int ret = n;

	while (n > 0)
	{
		ret += n % 10;
		n /= 10;
	}

	return ret;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	for (int i = 1; i <= 10000; i++)
	{
		int tmp = i;
		if (arr[tmp] == 0)
		{
			while (tmp <= 10000)
			{
				tmp = sn(tmp);
				if (tmp <= 10000)
					arr[tmp]++;
			}
		}
	}
	for (int i = 1; i <= 10000; i++)
	{
		if (arr[i] == 0)
		{
			cout << i << "\n";
		}
	}
	return 0;
}
