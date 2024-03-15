#include <bits/stdc++.h>

using namespace std;

int N, M, H;
int visited[33][33];
int ret = 4;

bool check()
{
	for (int i = 1; i <= N; i++)
	{
		int start = i;
		for (int j = 1; j <= H; j++)
		{
			if (visited[j][start]) start++;
			else if (visited[j][start - 1]) start--;
		}
		if (start != i) return false;
	}

	return true;
}

void go(int here, int cnt)
{
	if (cnt > 3 || cnt >= ret) return;

	if (check())
	{
		ret = min(ret, cnt); return;
	}

	for (int i = here; i <= H; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (visited[i][j] || visited[i][j - 1] || visited[i][j + 1]) continue;
			visited[i][j] = 1;
			go(i, cnt + 1);
			visited[i][j] = 0;
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);

	cin >> N >> M >> H;

	for (int i = 0; i < M; i++)
	{
		int y, x;
		cin >> y >> x;
		visited[y][x] = 1;
	}

	go(1, 0);
	if (ret > 3) ret = -1;
	cout << ret << "\n";
	return 0;
}