#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;

	while (T--)
	{
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int s = (r1 > r2) ? r2 : r1;
		int l = (r1 > r2) ? r1 : r2;
		double d = sqrtf((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		if (x1 == x2 && y1 == y2)
		{
			if (r1 == r2)
				cout << -1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (d < r1 || d < r2)
		{
			if (l - s == d)
			{
				cout << 1 << "\n";
			}
			else if (l - s < d)
			{
				cout << 2 << "\n";
			}
			else if (l - s > d)
			{
				cout << 0 << "\n";
			}
		}
		else
		{
			if (d > r1 + r2)
			{
				cout << 0 << "\n";
			}
			else if (d == r1 + r2)
			{
				cout << 1 << "\n";
			}
			else if (d < r1 + r2)
			{
				cout << 2 << "\n";
			}
		}
	}
	return 0;
}