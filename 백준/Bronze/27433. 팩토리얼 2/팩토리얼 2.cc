#include <bits/stdc++.h>

using namespace std;

long long factorial(long long n)
{
	if (n <= 1) return 1;

	return n * factorial(n - 1);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long N;
	cin >> N;

	cout << factorial(N) << "\n";
	return 0;
}