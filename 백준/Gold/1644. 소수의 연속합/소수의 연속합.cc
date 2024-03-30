#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;

	if (n == 1) { cout << 0; return 0; }

	vector<int> v;
	v.push_back(2);
	for (int i = 3; i <= n; i += 2)
	{
		bool flag = false;
		for (int j = 0; v[j] * v[j] <= i; j++)
		{
			if (i % v[j] == 0)
			{
				flag = true;
				break;
			}
		}
		if (flag == false) v.push_back(i);
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
