#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int M, N, J;
	int cur = 1;
	int ret = 0;

	cin >> N >> M;
	cin >> J;

	for (int i = 0; i < J; i++)
	{
		int pos;
		cin >> pos;

		if (pos >= cur && pos < (cur + M))
		{
			continue;
		}
		else if (pos < cur)
		{
			ret += (cur - pos);
			cur = pos;
		}
		else
		{
			ret += (pos - (cur + M - 1));
			cur = pos - M + 1;
		}
	}

	cout << ret << "\n";
	return 0;
}