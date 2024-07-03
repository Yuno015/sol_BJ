#include <bits/stdc++.h>

using namespace std;

string s, ret, front, back, center;
int alpha[26];
int cnt;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		alpha[s[i] - 'A']++;
	}

	for (int i = 0; i < 26; i++)
	{
		int temp = alpha[i] % 2;
		if (temp != 0)
		{
			cnt++;
			center += i + 'A';
		}
	}

	if (cnt > 1) cout << "I'm Sorry Hansoo\n";
	else
	{
		for (int i = 0; i < 26; i++)
		{
			for (int j = 0; j < alpha[i] / 2; j++)
			{
				back += i + 'A';
			}
		}
		front = back;
		reverse(back.begin(), back.end());
		ret = front + center + back;
		cout << ret << "\n";
	}

	return 0;
}