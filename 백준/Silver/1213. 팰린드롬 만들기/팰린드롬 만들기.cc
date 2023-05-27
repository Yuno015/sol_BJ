#include <bits/stdc++.h>

using namespace std;

int arr[30];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string input;
	cin >> input;

	int len = input.length();
	string answer = "";

	for (int i = 0; i < len; i++)
	{
		arr[input[i] - 'A']++;
	}

	int isOdd = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] % 2 != 0)
			isOdd++;
	}

	char odd = '!';
	queue<char> q;
	stack<char> s;
	if (isOdd > 1 || (len % 2 == 0 && isOdd != 0))
		answer = "I'm Sorry Hansoo";
	else
	{
		for (int i = 0; i < 26; i++)
		{
			if (arr[i] % 2 != 0)
			{
				odd = i + 'A';
				arr[i]--;
			}
			while (arr[i] != 0)
			{
				q.push(i + 'A');
				arr[i]--;
			}
		}
		int qSize = q.size();
		for (int i = 0; i < qSize / 2; i++)
		{
			answer += q.front();
			q.pop();
			s.push(q.front());
			q.pop();
		}
		if (odd != '!')
			answer += odd;
		int sSize = s.size();
		for (int i = 0; i < sSize; i++)
		{
			answer += s.top();
			s.pop();
		}
	}
	cout << answer << "\n";
	return 0;
}