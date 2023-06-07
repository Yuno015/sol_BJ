#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	
	int N;
	cin >> N;

	vector<int> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int B, C;
	cin >> B >> C;

	long long total = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < B)
		{
			total++;
		}
		else
		{
			arr[i] -= B;
			total++;
			if (arr[i] % C == 0)
			{
				total += arr[i] / C;
			}
			else
			{
				total += arr[i] / C + 1;
			}
		}
	}

	cout << total << "\n";
	return 0;
}