#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	priority_queue<int, vector<int>, greater<int>> q;
	for (int i = 0; i < N * N; i++)
	{
		int temp;
		cin >> temp;

		if (q.size() < N)
		{
			q.push(temp);
		}
		else
		{
			if (temp > q.top())
			{
				q.push(temp);
				q.pop();
			}
		}
	}

	cout << q.top() << "\n";
	return 0;
}
