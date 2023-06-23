#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	getline(cin, str);

	string s;
	getline(cin, s);

	int len = str.length();
	int sLen = s.length();
	int cnt = 0;
	for (int i = 0; i <= len - sLen; i++)
	{
		bool isOK = false;
		if (str[i] == s[0])
		{
			isOK = true;
			for (int j = 0; j < sLen; j++)
			{
				if (str[i + j] != s[j])
					isOK = false;
			}
		}
		if (isOK == false)
			continue;
		else
		{
			i += sLen - 1;
			cnt++;
		}
	}

	cout << cnt << "\n";
	return 0;
}