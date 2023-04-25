#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int N;
	int start = 2;

	cin >> N;

	while (N--)
	{
		start += (start - 1);
	}

	cout << start * start << endl;

	return 0;
}
