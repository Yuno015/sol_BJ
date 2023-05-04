#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

long long GCD(long long a, long long b);
long long LCM(long long a, long long b);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long A, B;
	cin >> A >> B;

	long long lcm = LCM(A, B);
	cout << lcm << "\n";
	return 0;
}

long long GCD(long long a, long long b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

long long LCM(long long a, long long b)
{
	return a * b / GCD(a, b);
}
