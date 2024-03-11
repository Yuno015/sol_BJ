#include <bits/stdc++.h>

using namespace std;

int N, K;
int visited[100010];
int before[100010];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);

	cin >> N >> K;

	if (N == K) cout << 0 << "\n" << N << "\n";
	else
	{
		visited[N] = 1;
		before[N] = -1;
		queue<int> q;
		q.push(N);

		while (!q.empty())
		{
			int now = q.front();
			q.pop();

			for (int next : {now - 1, now + 1, now * 2})
			{
				if (next >= 0 && next <= 100000)
				{
					if (next == K)
					{
						visited[next] = visited[now] + 1;
						before[K] = now;
						goto END;
					}
					if (visited[next] == 0)
					{
						q.push(next);
						visited[next] = visited[now] + 1;
						before[next] = now;
					}
				}
			}
		}

	END:

		stack<int> ret;
		ret.push(K);
		int i = K;
		while (before[i] != -1)
		{
			ret.push(before[i]);
			i = before[i];
		}
		cout << visited[K] - 1 << "\n";
		while (!ret.empty())
		{
			cout << ret.top() << " ";
			ret.pop();
		}
	}

	return 0;
}