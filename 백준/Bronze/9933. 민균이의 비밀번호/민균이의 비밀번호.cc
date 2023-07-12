#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	cin >> N;

	set<string> s;
	for(int i=0;i<N;i++)
	{
		string temp;
		cin >> temp;
		s.insert(temp);
	}

	int ans = -1;
	char c = '\0';

	for (auto iter = s.begin(); iter != s.end(); iter++)
	{
		string temp = *iter;
		reverse(temp.begin(), temp.end());

		if (s.count(temp) != 0)
		{
			ans = temp.length();
			c = temp[ans / 2];
			break;
		}
	}

	cout << ans << " " << c << "\n";
	return 0;
}
