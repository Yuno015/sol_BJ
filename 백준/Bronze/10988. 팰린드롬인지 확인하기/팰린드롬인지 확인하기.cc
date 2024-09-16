#include <bits/stdc++.h>

using namespace std;

bool P = true;

int main(void)
{
	string s;

	cin >> s;

	for (int i = 0; i < s.length() / 2; i++)
	{
		if (s[i] != s[s.length() - 1 - i])
		{
			P = false;
			break;
		}
	}

	cout << P;
	return 0;
}