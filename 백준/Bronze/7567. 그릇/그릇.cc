#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;

	int len = str.length();
	int height = 10;
	char before = str[0];

	for (int i = 1; i < len; i++)
	{
		if (before == str[i])
		{
			height += 5;
		}
		else
		{
			height += 10;
		}
		before = str[i];
	}

	cout << height << "\n";
	return 0;
}