#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int N;
	long A, B;
	long minX = 10001, minY = 10001;
	long maxX = -10001, maxY = -10001;

	cin >> N;

	while (N--)
	{
		cin >> A >> B;
		if (A > maxX)
			maxX = A;
		if (A < minX)
			minX = A;
		if (B > maxY)
			maxY = B;
		if (B < minY)
			minY = B;
	}

	cout << abs((maxX - minX) * (maxY - minY)) << endl;
	return 0;
}