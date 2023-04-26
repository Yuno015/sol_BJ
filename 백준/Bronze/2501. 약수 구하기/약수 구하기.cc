#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, m;
	int cnt = 0;
	vector<int> vec;

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cnt++;
			vec.push_back(i);
		}
	}
	if (m > cnt)
		cout << 0 << endl;
	else
		cout << vec[m - 1] << endl;
	return 0;
}