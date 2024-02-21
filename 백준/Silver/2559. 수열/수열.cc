#include <bits/stdc++.h>

using namespace std;

int arr[100004];
int psum[100004];

int main(void)
{
	int N, K;
	cin >> N >> K;

	memset(psum, 0, sizeof(psum));
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
		psum[i] = psum[i - 1] + arr[i];
	}

	vector<int> ret;
	for (int i = K; i <= N; i++)
	{
		ret.push_back(psum[i] - psum[i - K]);
	}

	cout << *max_element(ret.begin(), ret.end()) << '\n';
	return 0;
}