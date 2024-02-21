#include <bits/stdc++.h>

using namespace std;

const int NUM = 26;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	int arr[NUM];
	memset(arr, 0, sizeof(arr));

	for (int i = 0; i < s.length(); i++)
	{
		arr[s[i] - 'A']++;
	}

	int odd = 0;
	for (int i = 0; i < NUM; i++)
	{
		if (arr[i] % 2 != 0) odd++;
	}

	if (odd > 1) cout << "I'm Sorry Hansoo\n";
	else
	{
		string one = "";
		string ret = "";
		for (int i = 0; i < NUM; i++)
		{
			if (arr[i] % 2 == 1)
			{
				one += i + 'A';
				arr[i]--;
			}
			while (arr[i] != 0)
			{
				ret += i + 'A';
				arr[i] -= 2;
			}
		}
		string back = ret;
		reverse(back.begin(), back.end());
		ret = ret + one + back;

		cout << ret << '\n';
	}
	return 0;
}