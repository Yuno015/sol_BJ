#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	set<int> s;
	int ret = 0;
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;

		if (s.find(M - tmp) != s.end()) ret++;
		else s.insert(tmp);
	}

	cout << ret << '\n';
	return 0;
}