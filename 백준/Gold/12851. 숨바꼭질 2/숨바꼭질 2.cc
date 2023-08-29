#include <bits/stdc++.h>

using namespace std;

const int n = 100001;
int N, K;
int NK;
map<int, int> mp;
int visited[n];
int ret = 0;
int m = INT_MAX;
bool flag = false;

int main(void)
{
	cin >> N >> K;
	NK = abs(N - K);
	
	queue<pair<int, int>> q;
	q.push({ N, 0 });
	visited[N] = 1;

	while (q.size())
	{
		int here = q.front().first;
		int cur = q.front().second;
		q.pop();
		visited[here] = 1;

		if (here == K)
		{
			m = cur;
			ret++;
			break;
		}
		
		if (here - 1 >= 0 && here - 1 < n && visited[here - 1] == 0)
			q.push({ here - 1, cur + 1 });
		if (here + 1 >= 0 && here + 1 < n && visited[here + 1] == 0)
			q.push({ here + 1, cur + 1 });
		if (2 * here >= 0 && 2 * here < n && visited[2 * here] == 0)
			q.push({ here * 2, cur + 1 });
	}

	while (q.size())
	{
		int here = q.front().first;
		int cur = q.front().second;

		if (here == K && cur == m)
			ret++;

		q.pop();
	}

	cout << m << "\n" << ret << "\n";
	return 0;
}