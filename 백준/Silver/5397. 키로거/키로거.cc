#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	while (N--)
	{

		stack<char> s1, s2;
		string str;
		cin >> str;

		int len = str.length();
		for (int i = 0; i < len; i++)
		{
			if (str[i] == '<')
			{
				if (!s1.empty())
				{
					s2.push(s1.top());
					s1.pop();
				}
			}
			else if (str[i] == '>')
			{
				if (!s2.empty())
				{
					s1.push(s2.top());
					s2.pop();
				}
			}
			else if (str[i] == '-')
			{
				if (!s1.empty())
				{
					s1.pop();
				}
			}
			else
			{
				s1.push(str[i]);
			}
		}
		while (!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
		while (!s2.empty())
		{
			cout << s2.top();
			s2.pop();
		}
		cout << "\n";
	}
	return 0;
}