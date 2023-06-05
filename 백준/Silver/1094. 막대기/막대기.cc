#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	int n64 = 0;
	int n32 = 0;
	int n16 = 0;
	int n8 = 0;
	int n4 = 0;
	int n2 = 0;
	int n1 = 0;

	if (N >= 64)
	{
		n64++;
		N -= 64;
	}
	if (N >= 32)
	{
		n32++;
		N -= 32;
	}
	if (N >= 16)
	{
		n16++;
		N -= 16;
	}
	if (N >= 8)
	{
		n8++;
		N -= 8;
	}
	if (N >= 4)
	{
		n4++;
		N -= 4;
	}
	if (N >= 2)
	{
		n2++;
		N -= 2;
	}
	if (N == 1)
	{
		n1++;
		N -= 1;
	}

	cout << n64 + n32 + n16 + n8 + n4 + n2 + n1 << "\n";
	return 0; 
}