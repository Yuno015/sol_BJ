#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K;
	cin >> K;

	stack<int> s;
	while (K--)
	{
		int temp;
		cin >> temp;

		if (temp != 0)
			s.push(temp);
		else
			s.pop();
	}
	long long sum = 0;
	while(!s.empty())
	{
		sum += s.top();
		s.pop();
	}
	
	cout << sum << "\n";
	return 0;
}