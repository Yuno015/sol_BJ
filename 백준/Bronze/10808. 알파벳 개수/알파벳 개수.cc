#include <bits/stdc++.h>

using namespace std;

int arr[30];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;

	int len = s.length();
	for (int i = 0; i < len; i++)
	{
		arr[s[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}