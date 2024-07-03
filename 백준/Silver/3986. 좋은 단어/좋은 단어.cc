#include <bits/stdc++.h>

using namespace std;

int N, ret;
string s;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> s;
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
	cout << ret;
	return 0;
}