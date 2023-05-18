#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int T;
	cin >> T;

	while (T--)
	{
		int N, M;
		cin >> N >> M;

		queue<pair<int, int>> q;
		vector<int> temp;
		for (int i = 0; i < N; i++)
		{
			int p;
			cin >> p;
			q.push(make_pair(i, p));
			temp.push_back(p);
		}
		sort(temp.rbegin(), temp.rend());

		int cnt = 0;
		while (!q.empty())
		{
			if (q.front().second == temp[0])
			{
				cnt++;
				if (q.front().first == M)
				{
					break;
				}
				q.pop();
				temp.erase(temp.begin(), temp.begin() + 1);
			}
			else
			{
				q.push(q.front());
				q.pop();
			}
		}
		cout << cnt << "\n";
	}

	return 0;
}