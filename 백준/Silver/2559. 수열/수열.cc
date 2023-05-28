#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, K;
	cin >> N >> K;

	int max = INT_MIN;
	queue<int> q;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		q.push(temp);
		sum += temp;
		
		if (q.size() == K)
		{
			if (sum > max)
				max = sum;
			sum -= q.front();
			q.pop();
		}
	}

	cout << max << "\n";
	return 0;
}