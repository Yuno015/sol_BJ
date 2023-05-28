#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	int cnt = 0;
	while (N--)
	{
		string input;
		cin >> input;

		int len = input.length();
		stack<char> s;
		s.push(input[0]);
		for (int i = 1; i < len; i++)
		{
			if (s.empty())
				s.push(input[i]);
			else
			{
				if (s.top() == input[i])
					s.pop();
				else
					s.push(input[i]);
			}
		}
		if (s.empty())
			cnt++;
	}
	cout << cnt << "\n";
	return 0;
}