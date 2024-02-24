#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;

	for (int i = 0; i < 9; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	int sum = accumulate(v.begin(), v.end(), 0);

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (v[i] + v[j] == (sum - 100))
			{
				for (int k = 0; k < v.size(); k++)
				{
					if (k == i || k == j) continue;
					cout << v[k] << "\n";
				}
				goto END;
			}
		}
	}
END:

	return 0;
}