#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	int A = 0;
	int B = 0;

	string s;
	cin >> s;

	int len = s.length();

	for (int i = 0; i < len; i++)
	{
		if (s[i] == 'A')
			A++;
		else
			B++;
	}

	if (A > B)
	{
		cout << "A\n";
	}
	else if (A < B)
	{
		cout << "B\n";
	}
	else
	{
		cout << "Tie\n";
	}
	return 0;
}