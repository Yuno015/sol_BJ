#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	int ds;
	cin >> ds;

	priority_queue<int> q;
	for (int i = 1; i < N; i++)
	{
		int temp;
		cin >> temp;
		q.push(temp);
	}

	int ans = 0;

	if (N == 1)
		goto END;
	while (1)
	{
		if (ds > q.top())
			break;
		ds++;
		int temp = q.top() - 1;
		q.pop();
		q.push(temp);
		ans++;
	}

END:
	cout << ans << "\n";

	return 0;
}