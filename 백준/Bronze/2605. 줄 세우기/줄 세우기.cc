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

	stack<int> s;
	stack<int> temp;

	for (int i = 1; i <= N; i++)
	{
		int num;
		cin >> num;

		for (int j = 0; j < num; j++)
		{
			temp.push(s.top());
			s.pop();
		}
		s.push(i);
		while (!temp.empty())
		{
			s.push(temp.top());
			temp.pop();
		}
	}

	while (!s.empty())
	{
		temp.push(s.top());
		s.pop();
	}

	while (!temp.empty())
	{
		cout << temp.top() << " ";
		temp.pop();
	}

	return 0;
}