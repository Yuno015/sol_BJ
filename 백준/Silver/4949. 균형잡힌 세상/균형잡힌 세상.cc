#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	while (1)
	{
		string s;
		getline(cin, s);
		if (s == ".") break;

		stack<char> st;
		bool flag = true;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(' || s[i] == '[') st.push(s[i]);
			else if (s[i] == ')')
			{
				if (st.empty() || st.top() != '(')
				{
					flag = false;
					break;
				}
				else st.pop();
			}
			else if (s[i] == ']')
			{
				if (st.empty() || st.top() != '[')
				{
					flag = false;
					break;
				}
				else st.pop();
			}
		}
		if (!st.empty()) flag = false;

		if (flag) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}