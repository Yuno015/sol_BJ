#include <bits/stdc++.h>

using namespace std;

int N;
int arr[12][12];
int mn = INT_MAX;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

vector<pair<int, int>> v;

int cal(vector<pair<int, int>> &v)
{
	int ret = 0;

	for (int i = 0; i < v.size(); i++)
	{
		ret += arr[v[i].first][v[i].second];
		for (int j = 0; j < 4; j++)
		{
			ret += arr[v[i].first + dy[j]][v[i].second + dx[j]];
		}
	}

	return ret;
}

bool OK(vector<pair<int, int>>& v)
{
	bool ret = true;
	int d1, d2, d3;

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].first == 0 || v[i].first == N - 1 || v[i].second == 0 || v[i].second == N - 1)
		{
			ret = false;
			goto OK_END;
		}
	}

	d1 = abs(v[0].first - v[1].first) + abs(v[0].second - v[1].second);
	d2 = abs(v[0].first - v[2].first) + abs(v[0].second - v[2].second);
	d3 = abs(v[1].first - v[2].first) + abs(v[1].second - v[2].second);

	if (d1 < 3 || d2 < 3 || d3 < 3) ret = false;

	OK_END:
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
		}
	}

	for (int i = 0; i < N*N; i++)
	{
		v.push_back({ i / N, i % N });
		for (int j = i + 1; j < N*N; j++)
		{
			v.push_back({ j / N, j % N });
			for (int k = j + 1; k < N*N; k++)
			{
				v.push_back({ k / N, k % N });

				if (OK(v))
				{
					int tmp = cal(v);
					mn = min(mn, tmp);
				}
				v.pop_back();
			}
			v.pop_back();
		}
		v.pop_back();
	}

	cout << mn << "\n";

	return 0;
}