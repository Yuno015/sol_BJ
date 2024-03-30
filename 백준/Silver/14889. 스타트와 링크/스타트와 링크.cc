#include <bits/stdc++.h>

using namespace std;

int n;
int arr[25][25];
int sum;
int mn = INT_MAX;

vector<vector<int>> vs;
vector<int> v;
void combi(int s, vector<int> a)
{
	if (a.size() == n / 2)
	{
		vs.push_back(a);
		return;
	}

	for (int i = s + 1; i <= n; i++)
	{
		a.push_back(i);
		combi(i, a);
		a.pop_back();
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> arr[i][j];
			sum += arr[i][j];
		}
	}
	combi(0, v);
	vector<int> sums;
	for (int i = 0; i < vs.size(); i++)
	{
		int temp = 0;
		for (int j = 0; j < vs[i].size(); j++)
		{
			for (int k = j + 1; k < vs[i].size(); k++)
			{
				temp += arr[vs[i][j]][vs[i][k]];
				temp += arr[vs[i][k]][vs[i][j]];
			}
		}
		sums.push_back(temp);
	}

	for (int i = 0; i < sums.size() / 2; i++)
	{
		mn = min(abs(sums[i] - sums[sums.size() - 1 - i]), mn);
	}
	cout << mn << "\n";

	return 0;
}
