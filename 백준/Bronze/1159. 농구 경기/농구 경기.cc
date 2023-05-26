#include <bits/stdc++.h>

using namespace std;

int arr[30];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	while (n--)
	{
		string s;
		cin >> s;
		arr[s[0] - 'a']++;
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] >= 5)
		{
			cout << char('a' + i);
			cnt++;
		}
	}
	if (cnt == 0)
		cout << "PREDAJA\n";
	return 0;
}