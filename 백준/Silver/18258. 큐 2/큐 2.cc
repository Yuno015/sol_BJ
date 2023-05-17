#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	queue<int> q;
	while (N--)
	{
		string temp;
		cin >> temp;

		if (temp == "push")
		{
			int i;
			cin >> i;
			q.push(i);
		}
		else if (temp == "front")
		{
			if (q.empty())
				cout << -1 << "\n";
			else
				cout << q.front() << "\n";
		}
		else if (temp == "back")
		{
			if (q.empty())
				cout << -1 << "\n";
			else
				cout << q.back() << "\n";
		}
		else if (temp == "size")
		{
			cout << q.size() << "\n";
		}
		else if (temp == "empty")
		{
			cout << q.empty() << "\n";
		}
		else if (temp == "pop")
		{
			if (q.empty())
				cout << -1 << "\n";
			else
			{	
				cout << q.front() << "\n";
				q.pop();
			}
		}
	}
	return 0;
}