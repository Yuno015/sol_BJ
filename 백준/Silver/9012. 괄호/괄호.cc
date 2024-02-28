#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int T;
	cin >> T;

	while (T--)
	{
		string s;
		cin >> s;

		stack<char> st;
		bool flag = true;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(') st.push(s[i]);
			else
			{
				if (st.empty())
				{
					flag = false;
					break;
				}
				else
				{
					st.pop();
				}
			}
		}
		if (!st.empty()) flag = false;

		if (flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}