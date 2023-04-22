#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int n;
	string S;
	
	cin >> n;

	while (n--)
	{
		cin >> S;
		int i = S.size();
		cout << S[0] << S[i - 1] << endl;
	}

	return 0;
}