#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> owari;

void combi(int start, vector<int> v)
{
	if (v.size() == 7)
	{
		owari.push_back(v);
		return;
	}
	for (int i = start + 1; i < 9; i++)
	{
		v.push_back(i);
		combi(i, v);
		v.pop_back();
	}
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> arr;
	for (int i = 0; i < 9; i++)
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	vector<int> v;
	combi(-1, v);

	vector<int> result;
	for (int i = 0; i < owari.size(); i++)
	{
		int sum = 0;
		for (int j = 0; j < owari[i].size(); j++)
		{
			sum += arr[owari[i][j]];
		}
		if (sum == 100)
		{
			for (int j = 0; j < owari[i].size(); j++)
			{
				result.push_back(arr[owari[i][j]]);
			}
			break;
		}
	}
	sort(result.begin(), result.end());
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << "\n";
	}

	return 0;
}