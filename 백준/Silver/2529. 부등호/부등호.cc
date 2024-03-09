#include <bits/stdc++.h>

using namespace std;

int r;

string mn, mx;

vector<char> c;
vector<string> v;

void check(string s)
{
	bool check = true;

	for (int i = 0; i < c.size(); i++)
	{
		if (c[i] == '<')
		{
			if (s[i] > s[i + 1])
			{
				check = false;
				break;
			}
		}
		else if (c[i] == '>')
		{
			if (s[i] < s[i + 1])
			{
				check = false;
				break;
			}
		}
	}

	if (check == true)
	{
		if (mn == "") mn = s;
		else if (mx == "") mx = s;
		else
		{
			mx = max(s, mx);
		}
	}
}

int main(void)
{
	cin >> r;
	vector<int> arr(10);

	for (int i = 0; i < r; i++)
	{
		char tmp;
		cin >> tmp;
		c.push_back(tmp);
	}

	for (int i = 0; i < arr.size(); i++)
	{
		arr[i] = i;
	}

	do {
		string s = "";
		for (int i = 0; i < r + 1; i++)
		{
			s += to_string(arr[i]);
		}

		check(s);

		reverse(arr.begin() + r + 1, arr.end());
	} while (next_permutation(arr.begin(), arr.end()));

	cout << mx << "\n" << mn << "\n";

	return 0;
}
