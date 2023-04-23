#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	bool pd = true;

	cin >> str;

	int len = str.length();

	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - 1 - i])
			pd = false;
	}
	cout << pd << endl;

	return 0;
}
