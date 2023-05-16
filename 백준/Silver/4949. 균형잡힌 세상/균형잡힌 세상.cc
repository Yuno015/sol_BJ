#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	while (1)
	{
		getline(cin, str);
		if (str == ".")
			break;

		stack<char> s;
		int len = str.length();
		bool isOK = true;
		for (int i = 0; i < len; i++)
		{
			if (str[i] == '(' || str[i] == '[')
			{
				s.push(str[i]);
			}
			else if (str[i] == ')')
			{
				if (!s.empty())
				{
					char temp = s.top();
					if (temp != '(')
					{
						isOK = false;
						break;
					}
					s.pop();
				}
				else
				{
					isOK = false;
					break;
				}
			}
			else if (str[i] == ']')
			{
				if (!s.empty())
				{
					char temp = s.top();
					if (temp != '[')
					{
						isOK = false;
						break;
					}
					s.pop();
				}
				else
				{
					isOK = false;
					break;
				}
			}
		}
		if (s.empty() && isOK)
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	}

	return 0;
}