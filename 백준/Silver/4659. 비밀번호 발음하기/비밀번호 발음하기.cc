#include <bits/stdc++.h>

using namespace std;

bool moeum(string s)
{
	bool ret = false;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		{
			ret = true;
			break;
		}
	}

	return ret;
}

bool twoA(string s)
{
	bool ret = true;

	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i] == s[i + 1])
		{
			if (s[i] == 'o' || s[i] == 'e') continue;
			ret = false;
			break;
		}
	}

	return ret;
}

bool isM(char c)
{
	bool ret = false;

	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ret = true;

	return ret;
}

bool threeA(string s)
{
	bool ret = false;

	for (int i = 0; i < s.size() - 2; i++)
	{
		bool a = isM(s[i]);
		bool b = isM(s[i + 1]);
		bool c = isM(s[i + 2]);

		if (a == b && b == c)
		{
			ret = true;
			break;
		}
	}

	return ret;
}

void acceptable(string s)
{
	cout << "<" << s << ">" << " is acceptable.\n";
}

void na(string s)
{
	cout << "<" << s << ">" << " is not acceptable.\n";
}

int main(void)
{
	string s;
	while (1)
	{
		cin >> s;

		if (s == "end") break;

		if (s.length() == 1)
		{
			if (moeum(s) == true) acceptable(s);
			else na(s);
		}
		else if (s.length() == 2)
		{
			if (moeum(s) == true && twoA(s) == true) acceptable(s);
			else na(s);
		}
		else
		{
			if (moeum(s) == true && twoA(s) == true && threeA(s) == false) acceptable(s);
			else na(s);
		}
	}
	return 0;
}