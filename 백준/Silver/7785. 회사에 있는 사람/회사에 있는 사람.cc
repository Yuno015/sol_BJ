#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	string name, status;

	cin >> N;

	set<string> s;
	while (N--)
	{
		cin >> name >> status;
		
		if (status == "enter")
			s.insert(name);
		else
		{
			s.erase(s.find(name));
		}
	}
	for (auto iter = s.rbegin(); iter != s.rend(); iter++)
	{
		cout << *iter << "\n";
	}
	return 0;
}