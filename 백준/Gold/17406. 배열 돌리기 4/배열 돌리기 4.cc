#include <bits/stdc++.h>

using namespace std;

int n, m, k;
int r, c, s;
int arr[105][105];
int mn = INT_MAX;

int main(void)
{
	cin >> n >> m >> k;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> arr[i][j];
		}
	}

	vector<tuple<int, int, int>> rot;
	for (int i = 0; i < k; i++)
	{
		cin >> r >> c >> s;
		rot.push_back({ r, c, s });
	}

	vector<vector<int>> order;
	vector<int> v;
	for (int i = 0; i < k; i++) v.push_back(i);
	
	do
	{
		order.push_back(v);
	} while (next_permutation(v.begin(), v.end()));
	
	for (int i = 0; i < order.size(); i++)
	{
		int temp[105][105];
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				temp[i][j] = arr[i][j];
			}
		}

		for (int j = 0; j < order[i].size(); j++)
		{
			tie(r, c, s) = rot[order[i][j]];

			int tmp[105][105];
			int sz = 2 * (s + 1) - 1;
			for (int i = 0; i < sz; i++)
			{
				for (int j = 0; j < sz; j++)
				{
					tmp[i][j] = temp[i + r - s][j + c - s];
				}
			}
			int ro[105][105];
			for (int i = 0; i < s; i++)
			{
				int t = tmp[i][i];
				for (int j = 0; j < 2 * (s - i); j++)
				{
					ro[i + j][i] = tmp[i + j + 1][i];
				}
				for (int j = 0; j < 2 * (s - i); j++)
				{
					ro[sz - 1 - i][i + j] = tmp[sz - 1 - i][i + j + 1];
				}
				for (int j = 0; j < 2 * (s - i); j++)
				{
					ro[sz - 1 - i - j][sz - 1 - i] = tmp[sz - 1 - i - j - 1][sz - 1 - i];
				}
				for (int j = 0; j < 2 * (s - i); j++)
				{
					ro[i][sz - 1 - i - j] = tmp[i][sz - 1 - i - j - 1];
				}
				ro[i][i + 1] = t;
			}
			ro[s][s] = tmp[s][s];

			for (int i = 0; i < sz; i++)
			{
				for (int j = 0; j < sz; j++)
				{
					temp[i + r - s][j + c - s] = ro[i][j];
				}
			}
		}
		for (int i = 1; i <= n; i++)
		{
			int sum = 0;
			for (int j = 1; j <= m; j++)
			{
				sum += temp[i][j];
			}
			mn = min(sum, mn);
		}
	}
	cout << mn << "\n";
	return 0;
}