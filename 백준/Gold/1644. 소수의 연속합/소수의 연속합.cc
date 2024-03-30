#include <bits/stdc++.h>

using namespace std;

bool che[4000005];

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;

	if (n == 1) { cout << 0; return 0; }

	vector<int> v;
	//int counter = 0;
	for (int i = 2; i <= n; i++)
	{
		if (che[i]) continue;

		for (int j = 2 * i; j <= n; j += i)
		{
			che[j] = 1;
			//counter++;
		}
	}
	//cout << counter << "\n";

	for (int i = 2; i <= n; i++)
	{
		if (che[i] == 0) v.push_back(i);
	}
	
	int cnt = 0;
	int temp = 0;
	deque<int> q;
	for (int i = v.size() - 1; i >= 0; i--)
	{
		temp += v[i];
		q.push_back(v[i]);
		if (temp == n)
		{
			cnt++; 
			temp -= q.front();
			q.pop_front();
		}
		else if (temp > n)
		{
			temp -= q.front();
			q.pop_front();
		}
	}

	cout << cnt << "\n";
	return 0;
}
