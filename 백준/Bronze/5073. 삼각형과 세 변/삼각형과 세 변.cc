#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int A, B, C;

	while (1)
	{
		cin >> A >> B >> C;
		if (A == 0 && B == 0 && C == 0)
			break;

		if (A == B && B == C && C == A)
			cout << "Equilateral" << endl;
		else
		{
			if ((A + B <= C) || (A + C <= B) || (B + C) <= A)
				cout << "Invalid" << endl;
			else
			{
				if (A == B || B == C || C == A)
					cout << "Isosceles" << endl;
				else if (A != B && B != C && C != A)
					cout << "Scalene" << endl;
			}
		}
	}
	return 0;
}