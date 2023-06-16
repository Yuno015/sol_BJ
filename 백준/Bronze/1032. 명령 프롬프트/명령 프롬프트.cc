#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	vector<string> arr;
	while (N--)
	{
		string s;
		cin >> s;
		arr.push_back(s);
	}

	int len = arr[0].length();
	int size = arr.size();
	string ans = "";
	for (int i = 0; i < len; i++)
	{
		char temp = '\0';
		bool isSame = true;
		for (int j = 0; j < size; j++)
		{
			if (j == 0)
			{
				temp = arr[j][i];
			}
			else
			{
				if (arr[j][i] != temp)
				{
					isSame = false;
					break;
				}
			}
		}
		if (isSame == true)
			ans += temp;
		else
			ans += '?';
	}
	cout << ans << "\n";
	return 0;
}