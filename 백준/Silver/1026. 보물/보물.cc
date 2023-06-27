#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	vector<int> A;
	vector<int> B;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		A.push_back(temp);
	}

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		B.push_back(temp);
	}

	sort(A.begin(), A.end());
	sort(B.rbegin(), B.rend());

	long long sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += A[i] * B[i];
	}

	cout << sum << "\n";
	return 0;
}