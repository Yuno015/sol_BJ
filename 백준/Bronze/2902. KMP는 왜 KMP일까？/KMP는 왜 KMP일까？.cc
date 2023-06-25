#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;

	int len = s.length();
	
	string ret = "";
	ret += s[0];
	char before = s[0];
	for (int i = 0; i < len; i++)
	{
		if (before == '-')
		{
			ret += s[i];
		}
		before = s[i];
	}

	cout << ret << "\n";
	return 0;
}