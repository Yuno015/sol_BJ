#include <bits/stdc++.h>

using namespace std;

stack<int> s;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;

	int cnt = 0;
	int len = s.length();
	char before = s[0];
	for (int i = 1; i < len; i++)
	{
		if (before != s[i])
		{
			cnt++;
		}
		before = s[i];
	}

	int result = (cnt + 1) / 2;
	cout << result << "\n";
	return 0;
}