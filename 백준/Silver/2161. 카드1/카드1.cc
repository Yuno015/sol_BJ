#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	queue<int> q;
	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}

	queue<int> result;
	if (N == 1)
	{
		cout << 1;
	}
	else
	{
		while (1)
		{
			result.push(q.front());
			q.pop();
			if (q.size() == 1)
			{
				result.push(q.front());
				break;
			}
			q.push(q.front());
			q.pop();
		}

		while (!result.empty())
		{
			cout << result.front() << " ";
			result.pop();
		}
	}
	return 0;
}