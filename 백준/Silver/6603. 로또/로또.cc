#include <bits/stdc++.h>

using namespace std;

vector<int> source;

void print(vector<int> &source, vector<int> &v)
{
	int size = v.size();
	for (int i = 0; i < size; i++)
	{
		cout << source[v[i]] << " ";
	}
	cout << "\n";
}

void combi(int start, vector<int> v, int n, int k)
{
	if (v.size() == k)
	{
		print(source, v);
		return;
	}

	for (int i = start + 1; i < n; i++)
	{
		v.push_back(i);
		combi(i, v, n, k);
		v.pop_back();
	}
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while (1)
	{
		int k;
		cin >> k;
		if (k == 0)
			break;

		for (int i = 0; i < k; i++)
		{
			int temp;
			cin >> temp;
			source.push_back(temp);
		}
		
		vector<int> v;
		combi(-1, v, k, 6);
		
		cout << "\n";
		source.clear();
	}
	return 0; 
}
