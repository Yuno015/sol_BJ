#include <bits/stdc++.h>

using namespace std;

int N, star;
string s, b, e;
vector<string> v;

int main(void)
{
	cin >> N;
	cin >> s;
	
	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
	}

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '*')
		{
			star = i;
			break;
		}
	}

	for (int i = 0; i < star; i++)
	{
		b += s[i];
	}

	for (int i = s.length() - 1; i > star; i--)
	{
		e += s[i];
	}

	for (int i = 0; i < v.size(); i++)
	{
		bool OK = true;
		if (b.length() + e.length() > v[i].length()) OK = false;
		for (int j = 0; j < b.length(); j++)
		{
			if (v[i][j] != b[j])
			{
				OK = false;
				break;
			}
		}

		for (int j = 0; j < e.length(); j++)
		{
			if (v[i][v[i].length() - 1 - j] != e[j])
			{
				OK = false;
				break;
			}
		}
		if (OK) cout << "DA\n";
		else cout << "NE\n";
	}

	return 0;
}