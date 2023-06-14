#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int A, B, C;
	cin >> A >> B >> C;

	int D;
	cin >> D;

	int a, b, c;
	a = D / 3600;
	D %= 3600;
	b = D / 60;
	c = D % 60;

	if (C + c >= 60)
	{
		B++;
		C -= 60;
	}
	C += c;
	if (B + b >= 60)
	{
		A++;
		B -= 60;
	}
	B += b;
	
	A = (A + a) % 24;

	cout << A << " " << B << " " << C << "\n";
	return 0;
}