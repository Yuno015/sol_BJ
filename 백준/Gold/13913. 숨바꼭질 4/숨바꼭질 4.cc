#include <bits/stdc++.h>

using namespace std;

const int n = 100001;
int N, K;
int NK;
map<int, int> mp;
int visited[n];
int arr[n];
int ret = 0;
int m = INT_MAX;
int before;

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
		{
			q.push({ here - 1, cur + 1 });
			if (arr[here - 1] == 0)
				arr[here - 1] = here;
		}
		if (here + 1 >= 0 && here + 1 < n && visited[here + 1] == 0)
		{
			q.push({ here + 1, cur + 1 });
			if (arr[here + 1] == 0)
				arr[here + 1] = here;
		}
		if (2 * here >= 0 && 2 * here < n && visited[2 * here] == 0)
		{
			q.push({ here * 2, cur + 1 });
			if (arr[here * 2] == 0)
				arr[here * 2] = here;
		}
	}

	cout << m << "\n";
	stack<int> s;
	int tmp = K;
	s.push(K);
	if (N != K)
	{
		while (1)
		{
			if (arr[tmp] == N)
				break;
			s.push(arr[tmp]);
			tmp = arr[tmp];
		}
		s.push(N);
	}
	while (s.size())
	{
		cout << s.top() << " ";
		s.pop();
	}
	cout << "\n";
	return 0;
}