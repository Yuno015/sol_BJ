#include <bits/stdc++.h>

using namespace std;

int N, K;
int visited[100010];
long long cnt[100010];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);

	cin >> N >> K;

	if (N == K) cout << 0 << "\n" << 1 << "\n";
	else
	{
		visited[N] = 1;
		cnt[N] = 1;

		queue<int> q;
		q.push(N);

		while (!q.empty())
		{
			int now = q.front();
			q.pop();

			int next;
			next = now - 1;
			if (next >= 0 && next <= 100000)
			{
				if (visited[next] == 0)
				{
					q.push(next);
					visited[next] = visited[now] + 1;
					cnt[next] += cnt[now];
				}
				else if (visited[next] == visited[now] + 1)
				{
					cnt[next] += cnt[now];
				}
			}
			next = now + 1;
			if (next >= 0 && next <= 100000)
			{
				if (visited[next] == 0)
				{
					q.push(next);
					visited[next] = visited[now] + 1;
					cnt[next] += cnt[now];
				}
				else if (visited[next] == visited[now] + 1)
				{
					cnt[next] += cnt[now];
				}
			}
			next = now * 2;
			if (next >= 0 && next <= 100000)
			{
				if (visited[next] == 0)
				{
					q.push(next);
					visited[next] = visited[now] + 1;
					cnt[next] += cnt[now];
				}
				else if (visited[next] == visited[now] + 1)
				{
					cnt[next] += cnt[now];
				}
			}
		}
		cout << visited[K] - 1 << "\n" << cnt[K] << "\n";
	}

	return 0;
}