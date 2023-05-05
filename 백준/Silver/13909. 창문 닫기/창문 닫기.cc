#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int cnt = 0;
	for (int i = 1;; i++)
	{
		if (i * i > N)
			break;
		cnt++;
	}
	cout << cnt << "\n";
	return 0;
}