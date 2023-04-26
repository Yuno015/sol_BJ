#include <iostream>

using namespace std;

int main(void)
{
	int A, B;

	while (1)
	{
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;
		if (A % B == 0)
			cout << "multiple" << endl;
		else if (B % A == 0)
			cout << "factor" << endl;
		else
			cout << "neither" << endl;
	}
	return 0;
}