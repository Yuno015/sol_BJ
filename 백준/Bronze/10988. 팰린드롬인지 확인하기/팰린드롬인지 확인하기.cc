#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	bool isP = true;
	string s;
	cin >> s;
	int len = s.length();

	for (int i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - (i + 1)])
		{
			isP = false;
			break;
		}
	}

	if (isP) cout << 1;
	else cout << 0;
	return 0;
}