#include <bits/stdc++.h>

using namespace std;

stack<int> s;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	while (N--)
	{
		int temp;
		cin >> temp;
		s.push(temp);
	}

	int max = s.top();
	int cnt = 1;
	while (!s.empty())
	{
		if (s.top() > max)
		{
			max = s.top();
			cnt++;
		}
		s.pop();
	}

	cout << cnt << "\n";
	return 0;
}