#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	string base;
	cin >> base;

	auto temp = base.find("*");
	string bf = base.substr(0, temp);
	base.erase(0, temp + 1);
	
	int bfLen = bf.length();
	int beLen = base.length();

	while (n--)
	{
		string s;
		cin >> s;

		int len = s.length();
		if (len >= bfLen+ beLen && s.substr(0, bfLen) == bf && s.substr(len - beLen, beLen) == base)
			cout << "DA\n";
		else
			cout << "NE\n";
	}
	
	return 0;
}