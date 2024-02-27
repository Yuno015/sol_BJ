#include <bits/stdc++.h>

using namespace std;

int N;
char arr[66][66];

string quadTreeRecur(int y, int x, int n)
{
	if (n == 1)
	{
		string ret = "";
		ret += arr[y][x];
		return ret;
	}
	
	string ret = "";
	string a = quadTreeRecur(y, x, n/2);
	string b = quadTreeRecur(y, x + n/2, n/2);
	string c = quadTreeRecur(y + n/2, x, n/2);
	string d = quadTreeRecur(y + n/2, x + n/2, n/2);

	if (a == b && b == c && c == d && (a == "0" || a == "1")) ret += a;
	else
	{
		ret += "(";
		ret += (a + b + c + d);
		ret += ")";
	}

	return ret;
}

int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		for (int j = 0; j < s.size(); j++)
		{
			arr[i][j] = s[j];
		}
	}

	string ret = quadTreeRecur(0, 0, N);

	cout << ret << "\n";
	
	return 0;
}