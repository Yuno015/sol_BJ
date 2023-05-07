#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;
	
	set<string> ss;
	int len = s.length();
	for (int i = 0; i < len; i++)
	{
		for (int j = 1; j < len - i + 1; j++)
		{
			string temp = s.substr(i, j);
			ss.insert(temp);
		}
	}
	
	cout << ss.size() << "\n";
	return 0;
}