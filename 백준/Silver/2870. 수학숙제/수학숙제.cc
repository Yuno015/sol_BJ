#include <bits/stdc++.h>

using namespace std;

bool cmp(string& a, string& b)
{
	if (a.length() == b.length()) return a < b;

	return a.length() < b.length();
}

int main(void)
{
	int N;
	cin >> N;

	vector<string> v;
	
	while (N--)
	{
		string s;
		cin >> s;
		
		string tmp = "";
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				tmp += s[i];
			}
			else
			{
				if (tmp == "") continue;
				else
				{
					v.push_back(tmp);
					tmp = "";
				}
			}
		}
		if (tmp != "") v.push_back(tmp);
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i][0] == '0')
		{
			while (v[i][0] == '0')
			{
				if (v[i].length() == 1) break;
				v[i].erase(0, 1);
			}
		}
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}
	
	return 0;
}