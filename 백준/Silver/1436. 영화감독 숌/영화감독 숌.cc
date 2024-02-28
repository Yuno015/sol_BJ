#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N;
	cin >> N;

	int cnt = 0;
	int start = 666;
	while (1)
	{
		string s = to_string(start);
		if (s.find("666") != string::npos)
		{
			cnt++;
		}
		if (cnt == N)
		{
			cout << start << "\n";
			break;
		}
		start++;
	}
	return 0;
}