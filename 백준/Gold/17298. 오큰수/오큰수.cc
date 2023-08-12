#include <bits/stdc++.h>

using namespace std;

int arr[1000005], ret[1000005];
stack<int> s;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	memset(ret, -1, sizeof(ret));
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];

		while (s.size() && arr[s.top()] < arr[i])
		{
			ret[s.top()] = arr[i];
			s.pop();
		}
		s.push(i);
	}

	for (int i = 0; i < N; i++)
	{
		cout << ret[i] << " ";
	}


	return 0;
}