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
		string str;
		cin >> str;

		int len = str.length();
		stack<char> s;
		bool flag = true;
		for (int i = 0; i < len; i++)
		{
			if (str[i] == '(')
				s.push(str[i]);
			else
			{
				if (s.empty())
				{
					flag = false;
					break;
				}
				s.pop();
			}
		}
		if (flag == true && s.empty())
		{
			cout << "YES\n";
		}
		else
			cout << "NO\n";
	}
	return 0;
}