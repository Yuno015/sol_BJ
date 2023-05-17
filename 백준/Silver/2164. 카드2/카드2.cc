#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	queue<int> q;
	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}
	if (N == 1)
		cout << 1 << "\n";
	else
	{
		while (1)
		{
			q.pop();
			if (q.size() == 1)
				break;
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
		cout << q.front() << "\n";
	}
	return 0;
}