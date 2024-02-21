#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int ret = 0;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s.length() % 2 != 0) continue;
		else
		{
			stack<char> st;
			for (int j = 0; j < s.length(); j++)
			{
				if (st.empty()) st.push(s[j]);
				else
				{
					if (st.top() == s[j]) st.pop();
					else st.push(s[j]);
				}
			}
			if (st.empty()) ret++;
		}
	}

	cout << ret << '\n';
	return 0;
}