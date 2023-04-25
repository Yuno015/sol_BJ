#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
	string N;
	int B;
	int arr[36] = { 0, };
	long result = 0;

	cin >> N >> B;

	int len = N.length();

	for (int i = 0; i < len; i++)
	{
		int r;
		if (N[i] >= '0' && N[i] <= '9')
		{
			r = N[i] - '0';
		}
		else
		{
			r = N[i] - 'A' + 10;
		}
		result += (r * pow(B, len - i - 1));
	}

	cout << result << endl;
	return 0;
}
