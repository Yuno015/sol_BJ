#include <bits/stdc++.h>

using namespace std;

int n, m, cnt;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;

	while (n--)
	{
		string s;
		cin >> s;

		stack<char> st;

		for (int i = 0; i < s.length(); i++)
		{
			if (st.empty()) st.push(s[i]);
			else
			{
				if (st.top() == s[i]) st.pop();
				else st.push(s[i]);
			}
		}

		if (st.empty()) cnt++;
	}

	cout << cnt;
	return 0;
}