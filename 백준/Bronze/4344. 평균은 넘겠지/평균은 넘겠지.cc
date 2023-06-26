#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int C;
	cin >> C;

	while (C--)
	{
		int N;
		cin >> N;

		double sum = 0;
		vector<double> arr(N);
		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		sum /= N;
		double cnt = 0;
		for (int i = 0; i < N; i++)
		{
			if (arr[i] > sum)
				cnt++;
		}
		double result = round(cnt / N * 100 * 1000) / 1000;

		cout << fixed;
		cout.precision(3);
		cout << result << "%\n";
	}
	return 0;
}