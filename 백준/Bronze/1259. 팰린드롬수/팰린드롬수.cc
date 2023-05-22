#include <bits/stdc++.h>

using namespace std;

bool isPalin(string input)
{
	bool ret = true;

	int len = input.size();

	for (int i = 0; i < len / 2; i++)
	{
		if (input[i] != input[len - 1 - i])
		{
			ret = false;
			break;
		}
	}

	return ret;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while (1)
	{
		string n;
		cin >> n;

		if (n == "0")
			break;

		if (isPalin(n) == true)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}