#include <bits/stdc++.h>

using namespace std;

stack<char> s;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string str, bomb;
	string ret = "";
	cin >> str >> bomb;
	

	for (int i = 0; i < str.length(); i++)
	{
		s.push(str[i]);

		if (bomb.length() <= s.size() && s.top() == bomb[bomb.length() - 1])
		{
			string temp = "";
			for (int i = 0; i < bomb.length(); i++)
			{
				temp += s.top(); s.pop();
			}
			reverse(temp.begin(), temp.end());
			if (temp != bomb)
			{
				for (int i = 0; i < temp.length(); i++)
					s.push(temp[i]);
			}
		}
	}

	if (s.empty()) cout << "FRULA\n";
	else
	{
		while (!s.empty())
		{
			ret += s.top(); s.pop();
		}
		reverse(ret.begin(), ret.end());
		cout << ret << "\n";
	}
	return 0;
}
