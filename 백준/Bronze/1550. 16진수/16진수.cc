#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string N;
	cin >> N;

	int len = N.length();
	stack<char> s;
	for (int i = 0; i < len; i++)
	{
		s.push(N[i]);
	}
	long long sum = 0;
	int i = 1;
	while (!s.empty())
	{
		long long temp = 0;
		if (s.top() >= '0' && s.top() <= '9')
		{
			temp = s.top() - '0';
		}
		else if (s.top() >= 'A' && s.top() <= 'F')
		{
			temp = s.top() - 'A' + 10;
		}
		sum += temp * i;
		
		i *= 16;
		s.pop();
	}

	cout << sum << "\n";

	return 0;
}