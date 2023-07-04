#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;

	while (T--)
	{
		int N, M;
		cin >> N;

		set<int> s;
		for (int i = 0; i < N; i++)
		{
			int temp;
			cin >> temp;
			s.insert(temp);
		}

		cin >> M;
		vector<int> arr;
		for (int i = 0; i < M; i++)
		{
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}

		for (int i = 0; i < M; i++)
		{
			if (s.count(arr[i]) == 0)
			{
				cout << "0\n";
			}
			else
				cout << "1\n";
		}
	}
	return 0;
}
