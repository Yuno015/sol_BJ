#include <bits/stdc++.h>

using namespace std;

int arr[55][55];
vector<pair<int, int>> house;
vector<pair<int, int>> ck;
vector<vector<int>> remain;
int result = INT_MAX;

void combi(int start, vector<int> b, int size)
{
	if (b.size() == size)
	{
		remain.push_back(b);
		return;
	}
	for (int i = start + 1; i < ck.size(); i++)
	{
		b.push_back(i);
		combi(i, b, size);
		b.pop_back();
	}
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N, M;
	cin >> N >> M;

	for (int y = 1; y <= N; y++)
	{
		for (int x = 1; x <= N; x++)
		{
			int temp;
			cin >> temp;
			arr[y][x] = temp;
			if (temp == 1)
				house.push_back(make_pair(y, x));
			else if (temp == 2)
				ck.push_back(make_pair(y, x));
		}
	}
	vector<int> b;
	combi(-1, b, M);

	for (int i = 0; i < remain.size(); i++)
	{
		int tempR = 0;
		vector<int> ck_lens;
		for (int j = 0; j < house.size(); j++)
		{
			int temp = INT_MAX;
			for (int k = 0; k < remain[i].size(); k++)
			{
				int len = abs(house[j].first - ck[remain[i][k]].first) + abs(house[j].second - ck[remain[i][k]].second);
				if (len < temp)
					temp = len;
			}
			ck_lens.push_back(temp);
		}
		for (int j = 0; j < ck_lens.size(); j++)
		{
			tempR += ck_lens[j];
		}
		if (tempR < result)
			result = tempR;
	}

	cout << result << "\n";

	return 0;
}