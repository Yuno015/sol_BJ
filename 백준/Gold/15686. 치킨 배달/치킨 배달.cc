#include <bits/stdc++.h>

using namespace std;

int N, M;
int arr[54][54];
int ret = INT_MAX;
vector<pair<int, int>> chicken;
vector<pair<int, int>> home;
vector<vector<int>> cc;
vector<int> tmp;

void combi(int start)
{
	if (tmp.size() == M)
	{
		cc.push_back(tmp);
		return;
	}

	for (int i = start + 1; i < chicken.size(); i++)
	{
		tmp.push_back(i);
		combi(i);
		tmp.pop_back();
	}
}

int cal(int n, int y, int x)
{
	int ret = INT_MAX;

	for (int i = 0; i < M; i++)
	{
		int tmp = abs(y - chicken[cc[n][i]].first) + abs(x - chicken[cc[n][i]].second);
		ret = min(tmp, ret);
	}

	return ret;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 2) chicken.push_back({ i, j });
			else if (arr[i][j] == 1) home.push_back({ i, j });
		}
	}

	combi(-1);

	for (int i = 0; i < cc.size(); i++)
	{
		int sum = 0;
		for (int j = 0; j < home.size(); j++)
		{
			sum += cal(i, home[j].first, home[j].second);
		}
		ret = min(sum, ret);
	}

	cout << ret << "\n";
	return 0;
}