#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int T, C;
	int q, d, n, p;

	cin >> T;

	while (T--)
	{
		cin >> C;

		q = C / 25;
		C %= 25;
		d = C / 10;
		C %= 10;
		n = C / 5;
		C %= 5;
		p = C;

		cout << q << " " << d << " " << n << " " << p << endl;
	}
	return 0;
}
