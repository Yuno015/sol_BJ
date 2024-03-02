#include <bits/stdc++.h>

using namespace std;

vector<int> adj[10004];
int ret[10004];
int visited[10004];
int mx = -1;

int dfs(int here)
{
	visited[here] = 1;
	int ret = 1;
	for (int there : adj[here])
	{
		if (visited[there]) continue;
		ret += dfs(there);
	}
	return ret;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	
	for (int i = 1; i <= N; i++)
	{
		ret[i] = 1;
		visited[i] = 0;
	}

	for (int i = 0; i < M; i++)
	{
		int A, B;
		cin >> A >> B;

		adj[B].push_back(A);
	}

	for (int i = 1; i <= N; i++)
	{
		memset(visited, 0, sizeof(visited));
		ret[i] = dfs(i);
		mx = max(mx, ret[i]);
	}

	for (int i = 1; i <= N; i++)
	{
		if (ret[i] == mx)
			cout << i << " ";
	}
	cout << "\n";
	return 0;
}