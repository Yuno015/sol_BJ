#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	queue<int> q;
	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}
	vector<int> ret;
	while (1)
	{
		if (q.empty())
			break;
		else if (q.size() == 1)
		{
			ret.push_back(q.front());
			q.pop();
		}
		else
		{
			for (int i = 0; i < K - 1; i++)
			{
				q.push(q.front());
				q.pop();
			}
			ret.push_back(q.front());
			q.pop();
		}
	}
	cout << "<";
	for (int i = 0; i < ret.size() - 1; i++)
	{
		cout << ret[i] << ", ";
	}
	cout << ret[N - 1] << ">\n";
	return 0;
}