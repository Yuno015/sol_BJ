#include <bits/stdc++.h>

using namespace std;

bool isMoeum(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return true;
	else
		return false;
}

int main(void)
{
	while (1)
	{
		string temp;
		cin >> temp;

		if (temp == "end")
			break;

		int len = temp.length();
		int cnt = 0;
		bool P = true;

		stack<char> s;
		for (int i = 0; i < len; i++)
		{
			if (temp[i] == 'a' || temp[i] == 'e' || temp[i] == 'i' || temp[i] == 'o' || temp[i] == 'u')
			{
				cnt++;
			}
		}
		for (int i = 0; i < len - 2; i++)
		{
			bool zero = isMoeum(temp[i]);
			bool one = isMoeum(temp[i + 1]);
			bool two = isMoeum(temp[i + 2]);
			
			if (zero == one && one == two)
			{
				P = false;
				break;
			}
		}
		for (int i = 0; i < len - 1; i++)
		{
			if (temp[i] == temp[i + 1] && temp[i] != 'e' && temp[i] != 'o')
			{
				P = false;
				break;
			}
		}
		cout << "<" << temp << "> is ";
		if (cnt == 0 || P == false)
			cout << "not ";
		cout << "acceptable.\n";
			
	}
	return 0;
}