#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int winner = 0;
	int score = INT_MIN;

	for (int i = 1; i <= 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			int temp;
			cin >> temp;
			sum += temp;
		}
		if (sum > score)
		{
			winner = i;
			score = sum;
		}
	}

	cout << winner << " " << score << "\n";
	return 0;
}
