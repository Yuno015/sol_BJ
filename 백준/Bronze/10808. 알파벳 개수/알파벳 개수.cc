#include <bits/stdc++.h>

using namespace std;

int arr[30];

int main(void)
{
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		arr[s[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}