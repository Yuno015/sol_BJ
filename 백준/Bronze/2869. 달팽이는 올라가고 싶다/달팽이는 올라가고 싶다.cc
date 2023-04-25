#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(void)
{
	double A, B, V;

	cin >> A >> B >> V;
	
	cout << long(ceil((V - A) / (A - B)) + 1) << endl;

	return 0;
}
