#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	string s;
	cin >> n;
	cin >> s;

	int idx = s.find('*');
	string f = s.substr(0, idx);
	string b = s.substr(idx + 1, s.length());

	for (int i = 0; i < n; i++)
	{
		string tmp;
		cin >> tmp;

		if (tmp.length() < f.length() + b.length())
		{
			cout << "NE\n";
			continue;
		}
		bool P = true;
		for (int j = 0; j < f.length(); j++)
		{
			if (tmp[j] != f[j]) P = false;
		}
		for (int j = 0; j < b.length(); j++)
		{
			if (tmp[tmp.length() - b.length() + j] != b[j]) P = false;
		}

		if (P) cout << "DA\n";
		else cout << "NE\n";
	}


	return 0;
}