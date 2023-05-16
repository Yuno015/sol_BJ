#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> arr;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	queue<char> q;
	stack<int> s;

	int idx = 0;
	bool isPossible = true;
	int i = 1;
	while (1)
	{
		if (i > N)
			break;
		
		s.push(i);
		q.push('+');

	TEMP:
		if (s.top() > arr[idx])
		{
			isPossible = false;
			break;
		}
		else if (s.top() < arr[idx])
		{
			i++;
			continue;
		}
		else if (s.top() == arr[idx])
		{
			s.pop();
			q.push('-');
			idx++;
			if (s.empty())
			{
				i++;
				continue;
			}
			goto TEMP;
		}
	}
	if (isPossible)
	{
		int len = q.size();
		for (int i = 0; i < len; i++)
		{
			cout << q.front() << "\n";
			q.pop();
		}
	}
	else
	{
		cout << "NO" << "\n";
	}
	return 0;
}