#include <bits/stdc++.h>

using namespace std;

bool cmp(string& a, string& b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	return a.length() < b.length();
}

int main(void)
{
	int N;
	cin >> N;

	multiset<string> s;
	for (int i = 0; i < N; i++)
	{
		string tmp;
		cin >> tmp;

		int len = tmp.length();
		string temp = "";
		
		for (int j = 0; j < len; j++)
		{
			if (tmp[j] >= 'a' && tmp[j] <= 'z')
			{
				if (temp != "")
				{
					if (temp.length() > 1 && temp[0] == '0')
					{
						while (temp[0] == '0' && temp.length() > 1)
						{
							temp.erase(temp.begin());
						}
					}
					s.insert(temp);
					temp = "";
				}
			}
			else
			{
				temp += tmp[j];
			}
			if (j == len - 1)
			{
				if (temp != "")
				{
					if (temp.length() > 1 && temp[0] == '0')
					{
						while (temp[0] == '0' && temp.length() > 1)
						{
							temp.erase(temp.begin());
						}
					}
					s.insert(temp);
				}
			}
		}
	}
	vector<string> arr(s.begin(), s.end());
	sort(arr.begin(), arr.end(), cmp);
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\n";
	}
	return 0;
}