#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	while (1)
	{
		getline(cin, str);
		if (str == ".")
			break;

		int len = str.length();
		stack<char> s;
		bool flag = true;

		for (int i = 0; i < len; i++)
		{
			if (str[i] == '[' || str[i] == '(')
			{
				s.push(str[i]);
			}
			else if (str[i] == ']')
			{
				if (s.empty() || s.top() != '[')
				{
					flag = false;
					break;
				}
				else
					s.pop();
			}
			else if (str[i] == ')')
			{
				if (s.empty() || s.top() != '(')
				{
					flag = false;
					break;
				}
				else
					s.pop();
			}
		}
		if (flag == true && s.empty())
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}