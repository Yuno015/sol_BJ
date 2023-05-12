#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	set<string> s;
	int cnt = 0;
	while (N--)
	{
		string temp;
		cin >> temp;

		if (temp == "ENTER")
		{
			s.clear();
		}
		else
		{
			if (!s.count(temp))
			{
				s.insert(temp);
				cnt++;
			}
		}
	}

	cout << cnt << "\n";
	return 0;
}