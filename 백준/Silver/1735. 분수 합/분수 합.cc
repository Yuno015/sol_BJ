#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int GCD(int a, int b);
int LCM(int a, int b);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int bj1, bj2, bm1, bm2;
	cin >> bj1 >> bm1;
	cin >> bj2 >> bm2;

	int bj, bm;
	bm = bm1 * bm2;
	bj = bj1 * bm2 + bj2 * bm1;

	int gcd = GCD(bj, bm);
	cout << bj/gcd << " " << bm/gcd;
	return 0;
}

int GCD(int a, int b)
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

int LCM(int a, int b)
{
	return a * b / GCD(a, b);
}
