#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;

	while (T--)
	{
		int H, W, N;
		cin >> H >> W >> N;

		int h, w;
		if (N % H == 0)
		{
			h = H;
			w = N / H;
		}
		else
		{	
			h = N % H;
			w = N / H + 1;
		}
		printf("%d%02d\n", h, w);
	}
	return 0;
}