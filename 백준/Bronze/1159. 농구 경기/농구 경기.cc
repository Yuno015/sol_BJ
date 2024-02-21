#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int arr[26];

	memset(arr, 0, sizeof(arr));

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		arr[s[0] - 'a']++;
	}

	string ret = "";
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] >= 5) ret += ('a' + i);
	}

	if (ret == "") cout << "PREDAJA";
	else cout << ret;
	return 0;
}