#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;
	
	set<int> jr;
	vector<int> arr;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		jr.insert(temp);
		arr.push_back(temp);
	}
	
	int cnt = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (jr.count(M - arr[i]) != 0)
			cnt++;
	}
	
	cout << cnt/2 << "\n";
	return 0;
}