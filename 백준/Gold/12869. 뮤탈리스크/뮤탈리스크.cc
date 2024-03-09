#include <bits/stdc++.h>

using namespace std;

int N, a[3], dp[64][64][64], visited[64][64][64];
int arr[6][3] = {
	{9, 3, 1},
	{9, 1, 3},
	{3, 9, 1},
	{3, 1, 9},
	{1, 9, 3},
	{1, 3, 9}
};

struct SCV
{
	int a, b, c;

	SCV(int a1, int b1, int c1) { a = a1; b = b1; c = c1; }
};

queue<SCV> q;

int solve(int a, int b, int c)
{
	visited[a][b][c] = 1;
	q.push({ a, b, c });

	while (!q.empty())
	{
		int a = q.front().a;
		int b = q.front().b;
		int c = q.front().c;
		q.pop();

		if (visited[0][0][0]) break;
		for (int i = 0; i < 6; i++)
		{
			int na = max(0, a - arr[i][0]);
			int nb = max(0, b - arr[i][1]);
			int nc = max(0, c - arr[i][2]);

			if (visited[na][nb][nc]) continue;
			visited[na][nb][nc] = visited[a][b][c] + 1;
			q.push({ na, nb, nc });
		}
	}
	return visited[0][0][0] - 1;
}

int main(void)
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	
	cout << solve(a[0], a[1], a[2]) << "\n";
	return 0;
}
