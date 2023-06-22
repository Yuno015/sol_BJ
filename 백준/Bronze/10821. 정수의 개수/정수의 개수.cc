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

	int comma = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] == ',')
			comma++;
	}

	cout << comma + 1 << "\n";
	return 0;
}