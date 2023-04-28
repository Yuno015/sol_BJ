#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int A, B, C;

	cin >> A >> B >> C;

	if (A + B <= C)
		cout << 2 * (A + B) - 1 << endl;
	else if (B + C <= A)
		cout << 2 * (B + C) - 1 << endl;
	else if (C + A <= B)
		cout << 2 * (C + A) - 1 << endl;
	else
		cout << A + B + C << endl;
	return 0;
}