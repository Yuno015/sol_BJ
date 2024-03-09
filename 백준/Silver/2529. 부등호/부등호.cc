#include <bits/stdc++.h>

using namespace std;

int k;
int visited[10];
char arr[10];
vector<string> ret;

bool good(char x, char y, char op)
{
	if (x < y && op == '<') return true;
	if (x > y && op == '>') return true;
	return false;
}

void go(int idx, string num)
{
	if (idx == k + 1)
	{
		ret.push_back(num);
		return;
	}

	for (int i = 0; i <= 9; i++)
	{
		if (visited[i]) continue;
		if (idx == 0 || good(num[idx - 1], i + '0', arr[idx - 1]))
		{
			visited[i] = 1;
			go(idx + 1, num + to_string(i));
			visited[i] = 0;
		}
	}
	return;
}

int main(void)
{
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> arr[i];
	}

	go(0, "");
	sort(ret.begin(), ret.end());
	cout << ret[ret.size() - 1] << "\n" << ret[0] << "\n";

	return 0;
}
