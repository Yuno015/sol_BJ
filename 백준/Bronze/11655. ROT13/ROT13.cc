#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	string s;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] <= 'z' && s[i] >= 'n') s[i] -= 13;
		else if (s[i] >= 'a') s[i] += 13;
		else if (s[i] <= 'Z' && s[i] >= 'N') s[i] -= 13;
		else if (s[i] >= 'A') s[i] += 13;
	}

	cout << s << '\n';
	return 0;
}