#include <bits/stdc++.h>

using namespace std;

int n;
string s;

vector<int> num;
vector<char> oper_str;
int ret = INT_MIN;

int oper(char a, int b, int c)
{
	if (a == '+') return b + c;
	if (a == '-') return b - c;
	if (a == '*') return b * c;
}

void go(int idx, int sum)
{
	if (idx == num.size() - 1)
	{
		ret = max(ret, sum);
		return;
	}

	go(idx + 1, oper(oper_str[idx], sum, num[idx + 1]));
	if (idx < num.size() - 2)
	{
		int temp = oper(oper_str[idx + 1], num[idx + 1], num[idx + 2]);
		go(idx + 2, oper(oper_str[idx], sum, temp));
	}

	return;
}

int main(void)
{
	cin >> n;
	cin >> s;

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0) num.push_back(s[i] - '0');
		else oper_str.push_back(s[i]);
	}

	go(0, num[0]);

	cout << ret << "\n";
	return 0;
}