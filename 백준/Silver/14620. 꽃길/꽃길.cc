#include <bits/stdc++.h>

using namespace std;

int N;
int arr[11][11];
int cost = INT_MAX;
vector<pair<int, int>> v;
vector<vector<int>> cv;
vector<int> temp;

bool meet(int i, int j, int k)
{
	bool ret = false;
	if (abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second) < 3)
		ret = true;
	if (abs(v[j].first - v[k].first) + abs(v[j].second - v[k].second) < 3)
		ret = true;
	if (abs(v[i].first - v[k].first) + abs(v[i].second - v[k].second) < 3)
		ret = true;

	return ret;
}

int calculate(int y, int x)
{
	int ret = 0;
	ret += arr[y][x] + arr[y - 1][x] + arr[y][x + 1] + arr[y + 1][x] + arr[y][x - 1];
	return ret;
}

int main(void)
{
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
			if (i != 0 && j != 0 && i != N-1 && j != N-1)
			{
				v.push_back({ i, j });
			}
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = i + 1; j < v.size(); j++)
		{
			for (int k = j + 1; k < v.size(); k++)
			{
				int temp = 0;
				if (meet(i, j, k) == false)
				{
					temp = calculate(v[i].first, v[i].second) + calculate(v[j].first, v[j].second) + calculate(v[k].first, v[k].second);
					cost = min(cost, temp);
				}
			}
		}
	}

	cout << cost << "\n";

	return 0;
}