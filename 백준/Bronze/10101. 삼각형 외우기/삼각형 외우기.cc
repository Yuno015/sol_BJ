#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int A, B, C;

	cin >> A >> B >> C;

	if (A == 60 && B == 60 && C == 60)
		cout << "Equilateral" << endl;
	else if (A + B + C == 180 && (A == B || A == C || B == C))
		cout << "Isosceles" << endl;
	else if (A + B + C == 180 && A != B && B != C && C != A)
		cout << "Scalene" << endl;
	else if (A + B + C != 180)
		cout << "Error" << endl;

	return 0;
}