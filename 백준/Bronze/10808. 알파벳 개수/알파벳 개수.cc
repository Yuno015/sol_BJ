#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int arr[26];
	string s;

	cin >> s;

	memset(arr, 0, sizeof(arr));
	for (int i = 0; i < s.length(); i++)
	{
		int n = s[i] - 'a';
		arr[n]++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}