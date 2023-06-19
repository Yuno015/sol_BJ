#include <bits/stdc++.h>

using namespace std;

string Rev(string x)
{
	string s = x;
	reverse(s.begin(), s.end());
	while (s[0] == '0')
	{
		s.erase(s.begin());
	}
	return s;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string X, Y;
	cin >> X >> Y;

	string x = Rev(X);
	string y = Rev(Y);
	string result = Rev(to_string(stoi(x) + stoi(y)));

	cout << result << "\n";
	return 0;
}